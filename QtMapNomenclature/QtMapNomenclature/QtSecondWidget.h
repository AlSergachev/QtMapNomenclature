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
	
private:
	Ui::QtSecondWidget ui;
	QString X, Y, QN1, QN2, QN_re;
	class One_million;
	
};
