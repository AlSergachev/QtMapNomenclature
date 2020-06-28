#pragma once

#include <QWidget>
#include "ui_QtSecondWidget.h"

class QtSecondWidget : public QWidget
{
	Q_OBJECT

public:
	//QtSecondWidget(QString X, QString Y, QWidget *parent = Q_NULLPTR);
	QtSecondWidget(double &x, double &y, QWidget* parent = Q_NULLPTR);
	~QtSecondWidget();
	


private:
	Ui::QtSecondWidget ui;
	QString X, Y, QN1, QN2, QN_re;
	class One_million;
	//void coordinateTransformation(double &value, QString side);
	
};
