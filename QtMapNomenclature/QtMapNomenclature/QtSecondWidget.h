#pragma once

#include <QWidget>
#include "ui_QtSecondWidget.h"
#include "qmessagebox.h"


class QtSecondWidget : public QWidget
{
	Q_OBJECT

public:
	QtSecondWidget(double &x, double &y, QWidget* parent = Q_NULLPTR);
	~QtSecondWidget();
	Ui::QtSecondWidget ui;

private:
	QString X, Y, QN1, QN2, QN_re;
};

class One_million : public QtSecondWidget 
{
public:
	One_million(double m_sx, double m_sy, double& x, double& y, QtSecondWidget* UU);
	~One_million();

private:
	double sx;						//шаг по Х
	double sy;						//шаг по Y
	int columnNumber;				//номер колонки с координатой
	int stringNumber;				//номер строки с координатой
	int z;							//количество квадратов
	int m;							//количество строк
	int n;							//количество столбцов
	double north_result, south_result, west_result, east_result;
public:
	void coordinateTransformation(double& value, QString side, QtSecondWidget* UU);		//Переводит значения углов в град, мин, сек(целочисленное) и выводит его значение
	char StringNumber(double& x, double& y);											//Oпределяет номер строки квадрата М 1:1 000 000
	int ColumnNumber(double& x, double& y);												//Oпределяет номер столбца квадрата М 1:1 000 000
	double setBorder(double& x, double& y, QString side);								//Oпределяет границы квадрата М 1:1 000 000
	void getBorder(double& x, double& y, QtSecondWidget* th_s);							//Выводит значения рамок квадрата

};