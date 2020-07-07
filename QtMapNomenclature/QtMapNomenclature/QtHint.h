#pragma once

#include <QWidget>
#include "ui_QtHint.h"

class QtHint : public QWidget
{
	Q_OBJECT

public:
	QtHint(QWidget *parent = Q_NULLPTR);
	~QtHint();

private:
	Ui::QtHint ui;
};
