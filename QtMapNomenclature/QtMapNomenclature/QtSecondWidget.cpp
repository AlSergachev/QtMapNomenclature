#include "QtSecondWidget.h"
#include "QtMapNomenclature.h"




class QtSecondWidget::One_million {
private:
	double sx = 4;				//шаг по Х
	double sy = 6;				//шаг по Y
	int columnNumber = 0;		//номер колонки с координатой
	int stringNumber = 0;		//номер строки с координатой
	int z = 0;					//количество квадратов
	int m = 0;					//количество строк
	int n = 0;					//количество столбцов
	double north_result, south_result, west_result, east_result;

public:

	void coordinateTransformation(double& value, QString side, QtSecondWidget *UU)			//Переводит значения углов в град, мин, сек(целочисленное) и выводит его значение
{
	int Vgrad, Vmin, Vsec;
	QString tVgrad, tVmin, tVsec;

	Vgrad = static_cast<int>(value);
	Vmin = static_cast<int>((value - Vgrad) * 60);
	Vsec = round((((value - Vgrad) * 60) - Vmin) * 60);

	tVgrad.setNum(Vgrad);
	tVmin.setNum(Vmin);
	tVsec.setNum(Vsec);

	if (side == "north")
	{
		UU->ui.label_Ngr->setText(tVgrad);
		UU->ui.label_Nmin->setText(tVmin);
		UU->ui.label_Nsec->setText(tVsec);
	}
	else if (side == "south")
	{
		UU->ui.label_Sgr->setText(tVgrad);
		UU->ui.label_Smin->setText(tVmin);
		UU->ui.label_Ssec->setText(tVsec);
	}
	else if (side == "west")
	{
		UU->ui.label_Wgr->setText(tVgrad);
		UU->ui.label_Wmin->setText(tVmin);
		UU->ui.label_Wsec->setText(tVsec);
	}
	else if (side == "east")
	{
		UU->ui.label_Egr->setText(tVgrad);
		UU->ui.label_Emin->setText(tVmin);
		UU->ui.label_Esec->setText(tVsec);
	}
	else
		QMessageBox::warning(UU, "Error", "Coordinates output error");
}

	char StringNumber(double &x, double &y)			 //определяет номер строки квадрата М 1:1 000 000
	{
		for (; m < 12;) {			//цикл по строкам
			double north = (80 - sx * m);
			double south = (80 - sx - sx * m);
			if (x >= south && x <= north) {
				m++;
				north_result = north;
				stringNumber = m;
			}
			else {
				m++;
			}
		}
		m = 0;
		string a("TSRQPONMLKJI");
		return a[stringNumber - 1];
	}
	int ColumnNumber(double &x, double &y)			//определяет номер столбца квадрата М 1:1 000 000
	{
		for (; n < 60;) {		//цикл по столбцам
			double west = (0 + sy + n * sy);
			double east = (0 + n * sy);
			if (y >= east && y <= west) {
				n++;
				east_result = east;
				columnNumber = 30 + n;
			}
			else {
				n++;
			}
		}
		n = 0;
		return columnNumber;
	}
	double setBorder(double &x, double &y, QString side)			//определяет границы квадрата М 1:1 000 000
	{
		for (; n < 60;) {						//цикл по столбцам
			double west = (0 + sy + n * sy);
			double east = (0 + n * sy);
			if (y >= east && y <= west) {
				n++;
				west_result = west;
				east_result = east;
			}
			else {
				n++;
			}
		}
		for (; m < 12;) {						//цикл по строкам
			double north = (80 - sx * m);
			double south = (80 - sx - sx * m);
			if (x >= south && x <= north) {
				m++;
				north_result = north;
				south_result = south;
			}
			else {
				m++;
			}
		}
		m = 0;
		n = 0;
		if (side == "north")
			return north_result;
		else if (side == "east")
			return east_result;
		else if (side == "west")
			return west_result;
		else if (side == "south")
			return south_result;
		else
			/*cout << "ERROR\n"*/;
	}
	void getBorder(double &x, double &y, QtSecondWidget *th_s)			//Выводит значения рамок квадрата
	{
		double north_border = setBorder(x, y, "north");
		double south_border = setBorder(x, y, "south");
		double west_border = setBorder(x, y, "west");
		double east_border = setBorder(x, y, "east");
		coordinateTransformation(north_border, "north", th_s);
		coordinateTransformation(south_border, "south", th_s);
		coordinateTransformation(west_border, "west", th_s);
		coordinateTransformation(east_border, "east", th_s);
	}
};

QtSecondWidget::QtSecondWidget(double &x, double &y, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//Выводим координаты в Label
	ui.label_X->setText(X.setNum(x));
	ui.label_Y->setText(Y.setNum(y));
	
	One_million MyMapOM;
	int N2 = MyMapOM.ColumnNumber(x, y);
	char N1 = MyMapOM.StringNumber(x, y);
	double east2 = MyMapOM.setBorder(x, y, "east");
	double north2 = MyMapOM.setBorder(x, y, "north");
	MyMapOM.getBorder(x, y, this);

	QN1 = N1;
	QN2.setNum(N2);
	QN_re = QN1 + " - " + QN2;
	ui.label_nomenclature->setText(QN_re);
}

QtSecondWidget::~QtSecondWidget()
{
}
