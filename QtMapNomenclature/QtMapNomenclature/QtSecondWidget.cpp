#include "QtSecondWidget.h"
#include "QtMapNomenclature.h"
#include <QTextCodec>


One_million::One_million(double m_sx, double m_sy)
	: sx(m_sx), sy(m_sy), column_number(0), string_number(0), z(0), m(0), n(0), sheet_size(0)
{
}

void One_million::coordinateTransformation(double& value, QString side, QtSecondWidget* UU)			//Переводит значения углов в град, мин, сек(целочисленное) и выводит его значение
{
	int v_grad, v_min;
	double v_sec;
	QString t_v_grad, t_v_min, t_v_sec;

	v_grad = static_cast<int>(value);
	v_min = static_cast<int>((value - v_grad) * 60);
	v_sec = round((((value - v_grad) * 60) - v_min) * 60);
	if (v_sec == 60)
	{v_min += 1;		v_sec = 0;}

	t_v_grad.setNum(v_grad);

	if (v_min < 10)
		t_v_min = "0" + t_v_min.setNum(v_min);
	else 
		t_v_min.setNum(v_min);

	if (v_sec < 10)
		t_v_sec = "0" + t_v_sec.setNum(v_sec);
	else
		t_v_sec.setNum(v_sec);

	if (side == "north")
	{
		UU->ui.label_Ngr->setText(t_v_grad);
		UU->ui.label_Nmin->setText(t_v_min + "' " + t_v_sec + "''");
	}
	else if (side == "south")
	{
		UU->ui.label_Sgr->setText(t_v_grad);
		UU->ui.label_Smin->setText(t_v_min + "' " + t_v_sec + "''");
	}
	else if (side == "west")
	{
		UU->ui.label_Wgr->setText(t_v_grad);
		UU->ui.label_Wmin->setText(t_v_min + "' " + t_v_sec + "''");
	}
	else if (side == "east")
	{
		UU->ui.label_Egr->setText(t_v_grad);
		UU->ui.label_Emin->setText(t_v_min + "' " + t_v_sec + "''");
	}
	else
		QMessageBox::warning(UU, "Error", "Coordinates output error");
}
char One_million::setStringNumber(double& x, double& y)	
{
	for (; m < 12;) 			//цикл по строкам
	{
		double north = (80 - sx * m);
		double south = (80 - sx - sx * m);
		if (x >= south && x <= north) {
			m++;
			north_result = north;
			string_number = m;
		}
		else {
			m++;
		}
	}
	m = 0;
	string a("TSRQPONMLKJI");
	return a[string_number - 1];
}
int One_million::setColumnNumber(double& x, double& y)	
{
	for (; n < 60;) 		//цикл по столбцам
	{
		double west = (0 + sy + n * sy);
		double east = (0 + n * sy);
		if (y >= east && y <= west) {
			n++;
			east_result = east;
			column_number = 30 + n;
		}
		else {
			n++;
		}
	}
	n = 0;
	return column_number;
}
double One_million::setBorder1m(double& x, double& y, QString side)
{
	for (; n < 60;) 						//цикл по столбцам
	{
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
	for (; m < 12;) 						//цикл по строкам
	{
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
}
void One_million::getBorder1m( double& x, double& y, QtSecondWidget* th_s)
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
	: One_million(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

int One_hundred_thousand::setSquareNumber(double x, double y, double N, double E, size_t sheet_size)
{
	for (; m < sheet_size;) 			//цикл по строкам
	{
		for (; n < sheet_size;) 		//цикл по столбцам
		{
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				square_number = z + n;
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
	return square_number;
}
double One_hundred_thousand::setBorder(double x, double y, double N, double E, size_t sheet_size, QString side)
{
	for (; m < sheet_size;) 			//цикл по строкам
	{
		for (; n < sheet_size;) 		//цикл по столбцам
		{
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
}
void One_hundred_thousand::getBorder(double x, double y, double N, double E, size_t sheet_size, QtSecondWidget* th_s)
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
	: One_hundred_thousand(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

const char Fifty_thousand:: setSquareNumber50th(double x, double y, double N, double E)
{
	for (; m < 2;) 			//цикл по строкам
	{
		for (; n < 2;) 		//цикл по столбцам
		{
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				square_number = z + n;
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
	return a[square_number - 1];	
}

Twenty_five_thousand::Twenty_five_thousand(double m_sx, double m_sy)
	: Fifty_thousand(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

const char Twenty_five_thousand::setSquareNumber25th(double x, double y, double N, double E)
{
	for (; m < 2;) 			//цикл по строкам
	{
		for (; n < 2;) 		//цикл по столбцам
		{
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				square_number = z + n;
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
	m = 0;
	n = 0;
	return a[square_number - 1];
}

Ten_thousand::Ten_thousand(double m_sx, double m_sy)
	: Twenty_five_thousand(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

Five_thousand::Five_thousand(double m_sx, double m_sy)
	: One_hundred_thousand(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

Two_thousand::Two_thousand(double m_sx, double m_sy)
	: Five_thousand(m_sx, m_sy)
{
	sx = m_sx;
	sy = m_sy;
}

const char Two_thousand:: setSquareNumber2th(double x, double y, double N, double E)
{
	for (; m < 3;) 			//цикл по строкам
	{
		for (; n < 3;) 		//цикл по столбцам
		{
			double north = (N - sx * m);
			double south = (N - sx - sx * m);
			double west = (E + sy + n * sy);
			double east = (E + n * sy);
			if (y >= east && y <= west && x >= south && x <= north) {
				n++;
				square_number = z + n;
			}
			else {
				n++;
			}
		}
		z += n;
		n = 0;
		m++;
	}
	const char a[10] = "абвгдежзи";
	m = 0;
	n = 0;
	return a[square_number - 1];
}


QtSecondWidget::QtSecondWidget(double &x, double &y, QString scale, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QTextCodec* codec = QTextCodec::codecForName("CP 1251");
	//Выводим координаты в Label
	ui.label_X->setText("B = " + str_x.setNum(x));
	ui.label_Y->setText("L = " + str_y.setNum(y));
	 
	One_million MyMapOM(4, 6);
	int N2 = MyMapOM.setColumnNumber(x, y);
	char N1 = MyMapOM.setStringNumber(x, y);
	double east2 = MyMapOM.setBorder1m(x, y, "east");
	double north2 = MyMapOM.setBorder1m(x, y, "north");
	
	One_hundred_thousand MyMapOHT(1./3, 0.5);
	int N3 = MyMapOHT.setSquareNumber(x, y, north2, east2, 12);
	double north3 = MyMapOHT.setBorder(x, y, north2, east2, 12, "north");
	double east3 = MyMapOHT.setBorder(x, y, north2, east2, 12, "east");

	Fifty_thousand MyMapFfT(1./6, 0.25);
	const char N4 = MyMapFfT.setSquareNumber50th(x, y, north3, east3);
	double north4 = MyMapFfT.setBorder(x, y, north3, east3, 2, "north");
	double east4 = MyMapFfT.setBorder(x, y, north3, east3, 2, "east");

	Twenty_five_thousand MyMapTFT(1./12, 1./8);
	const char N5 = MyMapTFT.setSquareNumber25th(x, y, north4, east4);
	double north5 = MyMapTFT.setBorder(x, y, north4, east4, 2, "north");
	double east5 = MyMapTFT.setBorder(x, y, north4, east4, 2, "east");

	Ten_thousand MyMapTT(1./24, 1./16);
	int N6 = MyMapTT.setSquareNumber(x, y, north5, east5, 2);

	Five_thousand MyMapFvT(1./48, 1./32);
	int n4 = MyMapFvT.setSquareNumber(x, y, north3, east3, 16);
	double north_n4 = MyMapFvT.setBorder(x, y, north3, east3, 16, "north");
	double east_n4 = MyMapFvT.setBorder(x, y, north3, east3, 16, "east");

	Two_thousand MyMapTwT(1./144, 1./96);
	const char n5 = MyMapTwT.setSquareNumber2th(x, y, north_n4, east_n4);
		
	QN1 = N1;
	QN2.setNum(N2);
	QN_One_million = QN1 + "-" + QN2;
	QN3.setNum(N3);
	QN_One_hundred_thousand = QN_One_million + "-" + QN3;

	char const* N4_codec = &N4;
	QN4 = codec->toUnicode(N4_codec, strlen(N4_codec));
	QN_Fifty_thousand = QN_One_hundred_thousand + "-" + QN4[0];
	
	char const* N5_codec = &N5;
	QN5 = codec->toUnicode(N5_codec, strlen(N5_codec));
	QN_Twenty_five_thousand = QN_Fifty_thousand + "-" + QN5[0];

	QN6.setNum(N6);
	QN_Ten_thousand = QN_Twenty_five_thousand + "-" + QN6;

	Qn4.setNum(n4);
	QN_Five_thousand = QN_One_hundred_thousand + "(" + Qn4 + ")";

	char const* n5_codec = &n5;
	Qn5 = codec->toUnicode(n5_codec, strlen(n5_codec));
	QN_Two_thousand = QN_One_hundred_thousand + "(" + Qn4 + "-" + Qn5[0] + ")";

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
	else if (scale == "Ten_thousand")
	{
		ui.label_scale->setText("M 1 : 10 000");
		ui.label_nomenclature->setText(QN_Ten_thousand);
		MyMapTT.getBorder(x, y, north5, east5, 2, this);
	}
	else if (scale == "Five_thousand")
	{
		ui.label_scale->setText("M 1 : 5 000");
		ui.label_nomenclature->setText(QN_Five_thousand);
		MyMapFvT.getBorder(x, y, north3, east3, 16, this);
	}
	else if (scale == "Two_thousand")
	{
		ui.label_scale->setText("M 1 : 2 000");
		ui.label_nomenclature->setText(QN_Two_thousand);
		MyMapTwT.getBorder(x, y, north_n4, east_n4, 3, this);
	}
}

Two_thousand::~Two_thousand()
{
}

Five_thousand::~Five_thousand()
{
}

Ten_thousand::~Ten_thousand()
{
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
