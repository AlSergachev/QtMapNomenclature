#include "QtSecondWidget.h"
#include "QtMapNomenclature.h"
#include <QTextCodec>


One_million::One_million(double m_sx, double m_sy)
	: sx(m_sx), sy(m_sy), columnNumber(0), stringNumber(0), z(0), m(0), n(0), sheet_size(0)
{

}

void One_million::coordinateTransformation(double& value, QString side, QtSecondWidget* UU)			//Переводит значения углов в град, мин, сек(целочисленное) и выводит его значение
{
	int Vgrad, Vmin, Vsec;
	QString tVgrad, tVmin, tVsec;

	Vgrad = static_cast<int>(value);
	Vmin = static_cast<int>((value - Vgrad) * 60);
	Vsec = round((((value - Vgrad) * 60) - Vmin) * 60);
	if (Vsec == 60)
	{
		Vmin += 1;
		Vsec = 0;
	}
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
char One_million::StringNumber(double& x, double& y)			 //определяет номер строки квадрата М 1:1 000 000
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
int One_million::ColumnNumber(double& x, double& y)			//определяет номер столбца квадрата М 1:1 000 000
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
double One_million::setBorder1m(double& x, double& y, QString side)			//определяет границы квадрата М 1:1 000 000
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
void One_million::getBorder1m( double& x, double& y, QtSecondWidget* th_s)			//Выводит значения рамок квадрата
{
	double north_border = setBorder1m(x, y, "north");
	double south_border = setBorder1m(x, y, "south");
	double west_border = setBorder1m(x, y, "west");
	double east_border = setBorder1m(x, y, "east");
	coordinateTransformation(north_border, "north", th_s);
	coordinateTransformation(south_border, "south", th_s);
	coordinateTransformation(west_border, "west", th_s);
	coordinateTransformation(east_border, "east", th_s);
}

One_hundred_thousand::One_hundred_thousand(double m_sx, double m_sy)
	: One_million(m_sx, m_sy)/*, sx(m_sx), sy(m_sy)*/
{
	sx = m_sx;
	sy = m_sy;
}

int One_hundred_thousand::SquareNumber(double x, double y, double N, double E, size_t sheet_size)			//определяет номер квадрата М 1:100 000
{
	for (; m < sheet_size;) {			//цикл по строкам
		for (; n < sheet_size;) {		//цикл по столбцам
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				squareNumber = z + n;
			}
			else {
				n++;
			}
		}
		z += n;
		n = 0;
		m++;
	}
	m = 0;
	n = 0;
	return squareNumber;
}
double One_hundred_thousand::setBorder(double x, double y, double N, double E, size_t sheet_size, QString side)			//определяет границы квадрата М 1:100 000
{
	for (; m < sheet_size;) {			//цикл по строкам
		for (; n < sheet_size;) {		//цикл по столбцам
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				north_result = north;
				south_result = south;
				west_result = west;
				east_result = east;
			}
			else {
				n++;
			}
		}
		z += n;
		n = 0;
		m++;
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
void One_hundred_thousand::getBorder(double x, double y, double N, double E, size_t sheet_size, QtSecondWidget* th_s)			//Выводит значения рамок квадрата
{
	double north_border = setBorder(x, y, N, E, sheet_size, "north");
	double south_border = setBorder(x, y, N, E, sheet_size, "south");
	double west_border = setBorder(x, y, N, E, sheet_size, "west");
	double east_border = setBorder(x, y, N, E, sheet_size, "east");
	coordinateTransformation(north_border, "north", th_s);
	coordinateTransformation(south_border, "south", th_s);
	coordinateTransformation(west_border, "west", th_s);
	coordinateTransformation(east_border, "east", th_s);
}

Fifty_thousand::Fifty_thousand(double m_sx, double m_sy)
	: One_hundred_thousand(m_sx, m_sy)/*, sx(m_sx), sy(m_sy)*/
{
	sx = m_sx;
	sy = m_sy;
}

const char Fifty_thousand:: SquareNumber50th(double x, double y, double N, double E)			//определяет номер квадрата М 1:50 000
{
	for (; m < 2;) {			//цикл по строкам
		for (; n < 2;) {		//цикл по столбцам
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				squareNumber = z + n;
			}
			else {
				n++;
			}
		}
		z += n;
		n = 0;
		m++;
	}
	const char a[5] = "АБВГ";
	m = 0;
	n = 0;
	return a[squareNumber - 1];															//Убрал "... - 1". Возможна ошибка
}

Twenty_five_thousand::Twenty_five_thousand(double m_sx, double m_sy)
	: Fifty_thousand(m_sx, m_sy)/*, sx(m_sx), sy(m_sy)*/
{
	sx = m_sx;
	sy = m_sy;
}

const char Twenty_five_thousand::SquareNumber25th(double x, double y, double N, double E)			 //определяет номер квадрата М 1:25 000
{
	for (; m < 2;) {			//цикл по строкам
		for (; n < 2;) {		//цикл по столбцам
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				squareNumber = z + n;
			}
			else {
				n++;
			}
		}
		z += n;
		n = 0;
		m++;
	}
	const char a[5] = "абвг";
	//string a("абвг");
	m = 0;
	n = 0;
	return a[squareNumber - 1];
}


QtSecondWidget::QtSecondWidget(double &x, double &y, QString scale, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//Выводим координаты в Label
	ui.label_X->setText(X.setNum(x));
	ui.label_Y->setText(Y.setNum(y));
	 
	One_million MyMapOM(4, 6);
	int N2 = MyMapOM.ColumnNumber(x, y);
	char N1 = MyMapOM.StringNumber(x, y);
	double east2 = MyMapOM.setBorder1m(x, y, "east");
	double north2 = MyMapOM.setBorder1m(x, y, "north");
	
	One_hundred_thousand MyMapOHT(1./3, 0.5);
	int N3 = MyMapOHT.SquareNumber(x, y, north2, east2, 12);
	double north3 = MyMapOHT.setBorder(x, y, north2, east2, 12, "north");
	double east3 = MyMapOHT.setBorder(x, y, north2, east2, 12, "east");

	Fifty_thousand MyMapFfT(1./6, 0.25);
	const char N4 = MyMapFfT.SquareNumber50th(x, y, north3, east3);
	double north4 = MyMapFfT.setBorder(x, y, north3, east3, 2, "north");
	double east4 = MyMapFfT.setBorder(x, y, north3, east3, 2, "east");

	Twenty_five_thousand MyMapTFT(1./12, 1./8);
	const char N5 = MyMapTFT.SquareNumber25th(x, y, north4, east4);
	double north5 = MyMapTFT.setBorder(x, y, north4, east4, 2, "north");
	double east5 = MyMapTFT.setBorder(x, y, north4, east4, 2, "east");






	QTextCodec* codec = QTextCodec::codecForName("CP 1251");
	QN1 = N1;
	QN2.setNum(N2);
	QN_One_million = QN1 + " - " + QN2;
	QN3.setNum(N3);
	QN_One_hundred_thousand = QN_One_million + " - " + QN3;

	char const* N4_codec = &N4;
	QN4 = codec->toUnicode(N4_codec, strlen(N4_codec));
	QN_Fifty_thousand = QN_One_hundred_thousand + " - " + QN4[0];
	
	char const* N5_codec = &N5;
	QN5 = codec->toUnicode(N5_codec, strlen(N5_codec));
	QN_Twenty_five_thousand = QN_Fifty_thousand + " - " + QN5[0];

	if (scale == "One_million")
	{
		ui.label_scale->setText("M 1 : 1 000 000");
		ui.label_nomenclature->setText(QN_One_million);
		MyMapOM.getBorder1m(x, y, this);
	}
	else if (scale == "One_hundred_thousand")
	{
		ui.label_scale->setText("M 1 : 100 000");
		ui.label_nomenclature->setText(QN_One_hundred_thousand);
		MyMapOHT.getBorder(x, y, north2, east2, 12, this);
	}
	else if (scale == "Fifty_thousand")
	{
		ui.label_scale->setText("M 1 : 50 000");
		ui.label_nomenclature->setText(QN_Fifty_thousand);
		MyMapFfT.getBorder(x, y, north3, east3, 2, this);
	}
	else if (scale == "Twenty_five_thousand")
	{
		ui.label_scale->setText("M 1 : 25 000");
		ui.label_nomenclature->setText(QN_Twenty_five_thousand);
		MyMapTFT.getBorder(x, y, north4, east4, 2, this);
	}
}


Twenty_five_thousand::~Twenty_five_thousand()
{
}

Fifty_thousand::~Fifty_thousand()
{
}

One_hundred_thousand::~One_hundred_thousand()
{
}

One_million::~One_million()
{
}

QtSecondWidget::~QtSecondWidget()
{
}
