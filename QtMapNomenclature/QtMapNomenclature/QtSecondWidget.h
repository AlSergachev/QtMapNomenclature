#pragma once

#include <QWidget>
#include "ui_QtSecondWidget.h"
#include "qmessagebox.h"


class QtSecondWidget : public QWidget
{
	Q_OBJECT

public:
	QtSecondWidget(double &x, double &y, QString scale, QWidget* parent = Q_NULLPTR);
	~QtSecondWidget();
	Ui::QtSecondWidget ui;

private:
	QString X, Y, QN1, QN2, QN_One_million, 
		QN3, QN_One_hundred_thousand, 
		QN4, QN_Fifty_thousand, 
		QN5, QN_Twenty_five_thousand;
};

class One_million
{

protected:
	double sx;						//шаг по Х
	double sy;						//шаг по Y
	int columnNumber;				//номер колонки с координатой
	int stringNumber;				//номер строки с координатой
	int z;							//количество квадратов
	int m;							//количество строк
	int n;							//количество столбцов
	double north_result, south_result, west_result, east_result;
	size_t sheet_size;
public:
	One_million(double m_sx, double m_sy);
	~One_million();

	void coordinateTransformation(double& value, QString side, QtSecondWidget* UU);		//Переводит значения углов в град, мин, сек(целочисленное) и выводит его значение
	char StringNumber(double& x, double& y);											//Oпределяет номер строки квадрата М 1:1 000 000
	int ColumnNumber(double& x, double& y);												//Oпределяет номер столбца квадрата М 1:1 000 000
	double setBorder1m(double& x, double& y, QString side);								//Oпределяет границы квадрата М 1:1 000 000
	void getBorder1m(double& x, double& y, QtSecondWidget* th_s);							//Выводит значения рамок квадрата

};

class One_hundred_thousand: public One_million 
{
private:
	//double sx = 1. / 3;			//шаг по Х
	//double sy = 0.5;			//шаг по Y
			//номер квадрата с координатой
	//int z = 0;					//количество квадратов
	//int m = 0;					//количество строк
	//int n = 0;					//количество столбцов
	//double north_result, south_result, west_result, east_result;
public:
	int squareNumber = 0;
	One_hundred_thousand(double m_sx, double m_sy);
	~One_hundred_thousand();
	int SquareNumber(double x, double y, double N, double E, size_t sheet_size);
	double setBorder(double x, double y, double N, double E, size_t sheet_size, QString side);
	void getBorder(double x, double y, double N, double E, size_t sheet_size, QtSecondWidget* th_s);
	
};

class Fifty_thousand: public One_hundred_thousand
{
private:
	//double sx = 1. / 6;			//шаг по Х
	//double sy = 0.25;			//шаг по Y
	//int squareNumber = 0;		//номер квадрата с координатой
	//int z = 0;					//количество квадратов
	//int m = 0;					//количество строк
	//int n = 0;					//количество столбцов
	//double north_result, south_result, west_result, east_result;
public:
	Fifty_thousand(double m_sx, double m_sy);
	~Fifty_thousand();
	const char SquareNumber50th(double x, double y, double N, double E);		//определяет номер квадрата М 1:50 000
	

	//double setBorder(double x, double y, double N, double E, string side)			//определяет  границы квадрата М 1:50 000
	//{
	//	for (; m < 2;) {			//цикл по строкам
	//		for (; n < 2;) {		//цикл по столбцам
	//			double north = (N - sx * m);
	//			double south = (N - sx - sx * m);
	//			double west = (E + sy + n * sy);
	//			double east = (E + n * sy);
	//			if (y >= east && y <= west && x >= south && x <= north) {
	//				n++;
	//				north_result = north;
	//				south_result = south;
	//				west_result = west;
	//				east_result = east;
	//			}
	//			else {
	//				n++;
	//			}
	//		}
	//		z += n;
	//		n = 0;
	//		m++;
	//	}
	//	m = 0;
	//	n = 0;
	//	if (side == "north")
	//		return north_result;
	//	else if (side == "east")
	//		return east_result;
	//	else if (side == "west")
	//		return west_result;
	//	else if (side == "south")
	//		return south_result;
	//	else
	//		cout << "ERROR\n";
	//}
	//void getBorder(double x, double y, double N, double E)			//Выводит значения рамок квадрата 
	//{
	//	double north_border = setBorder(x, y, N, E, "north");
	//	double south_border = setBorder(x, y, N, E, "south");
	//	double west_border = setBorder(x, y, N, E, "west");
	//	double east_border = setBorder(x, y, N, E, "east");
	//	coordinateTransformation(north_border, "north");
	//	coordinateTransformation(south_border, "south");
	//	coordinateTransformation(west_border, "west");
	//	coordinateTransformation(east_border, "east");
	//}
};


class Twenty_five_thousand: public Fifty_thousand
{
//private:
//	double sx = 1. / 12;		//шаг по Х
//	double sy = 1. / 8;			//шаг по Y
//	int squareNumber = 0;		//номер квадрата с координатой
//	int z = 0;					//количество квадратов
//	int m = 0;					//количество строк
//	int n = 0;					//количество столбцов
//	double north_result, south_result, west_result, east_result;
public:
	Twenty_five_thousand(double m_sx, double m_sy);
	~Twenty_five_thousand();
	const char SquareNumber25th(double x, double y, double N, double E);
};
