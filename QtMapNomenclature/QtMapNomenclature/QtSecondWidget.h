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
	QString str_x, str_y, 
		QN1, QN2, QN_One_million, 
		QN3, QN_One_hundred_thousand, 
		QN4, QN_Fifty_thousand, 
		QN5, QN_Twenty_five_thousand,
		QN6, QN_Ten_thousand,
		Qn4, QN_Five_thousand,
		Qn5, QN_Two_thousand;
};

class One_million
{

protected:
	double sx;						//шаг по Х
	double sy;						//шаг по Y
	int column_number;				//номер колонки с координатой
	int string_number;				//номер строки с координатой
	int z;							//количество квадратов
	int m;							//количество строк
	int n;							//количество столбцов
	size_t sheet_size;				//количество строк.столбцов квадрата
	double north_result, south_result, west_result, east_result;
	
public:
	One_million(double m_sx, double m_sy);
	~One_million();

	void coordinateTransformation(double& value, QString side, QtSecondWidget* UU);		//Переводит значения углов в град, мин, сек и выводит его значение
	char setStringNumber(double& x, double& y);											//Oпределяет номер строки квадрата М 1:1 000 000
	int setColumnNumber(double& x, double& y);												//Oпределяет номер столбца квадрата М 1:1 000 000
	double setBorder1m(double& x, double& y, QString side);								//Oпределяет границы квадрата М 1:1 000 000
	void getBorder1m(double& x, double& y, QtSecondWidget* th_s);						//Выводит значения рамок квадрата М 1:1 000 000

};

class One_hundred_thousand: public One_million 
{
public:
	int square_number = 0;																//номер квадрата
	One_hundred_thousand(double m_sx, double m_sy);
	~One_hundred_thousand();

	int setSquareNumber(double x, double y, double N, double E, size_t sheet_size);						//Oпределяет номер квадрата
	double setBorder(double x, double y, double N, double E, size_t sheet_size, QString side);			//Oпределяет границы квадрата
	void getBorder(double x, double y, double N, double E, size_t sheet_size, QtSecondWidget* th_s);	//Выводит значения рамок квадрата
};

class Fifty_thousand: public One_hundred_thousand
{
public:
	Fifty_thousand(double m_sx, double m_sy);
	~Fifty_thousand();

	const char setSquareNumber50th(double x, double y, double N, double E);				//определяет номер квадрата М 1:50 000
};	

class Twenty_five_thousand: public Fifty_thousand
{
public:
	Twenty_five_thousand(double m_sx, double m_sy);
	~Twenty_five_thousand();

	const char setSquareNumber25th(double x, double y, double N, double E);				//определяет номер квадрата М 1:25 000
};

class Ten_thousand: public Twenty_five_thousand 
{
public:
	Ten_thousand(double m_sx, double m_sy);
	~Ten_thousand();
};

class Five_thousand :public One_hundred_thousand 
{
public:
	Five_thousand(double m_sx, double m_sy);
	~Five_thousand();
};

class Two_thousand : public Five_thousand
{
public:
	Two_thousand(double m_sx, double m_sy);
	~Two_thousand();

	const char setSquareNumber2th(double x, double y, double N, double E);					//определяет номер квадрата М 1:2 000
};
