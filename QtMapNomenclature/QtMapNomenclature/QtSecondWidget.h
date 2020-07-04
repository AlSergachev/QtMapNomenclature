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
	QString X, Y, QN1, QN2, QN_One_million, QN3, QN_One_hundred_thousand;
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
	int squareNumber = 0;		//номер квадрата с координатой
	//int z = 0;					//количество квадратов
	//int m = 0;					//количество строк
	//int n = 0;					//количество столбцов
	//double north_result, south_result, west_result, east_result;
public:
	One_hundred_thousand(double m_sx, double m_sy);
	~One_hundred_thousand();
	int SquareNumber(double x, double y, double N, double E);
	double setBorder(double x, double y, double N, double E, QString side);
	void getBorder(double x, double y, double N, double E, QtSecondWidget* th_s);
	
};
