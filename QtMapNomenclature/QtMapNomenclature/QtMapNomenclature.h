#pragma once

#include <QtWidgets/QMainWindow>
#include "qmainwindow.h"
#include "ui_QtMapNomenclature.h"
#include "QtSecondWidget.h"
#include <string>

using namespace std;

class QtMapNomenclature : public QMainWindow
{
    Q_OBJECT

private:
    Ui::QtMapNomenclatureClass ui;
    double x, y, Xsec, Ysec;
    int Xgrad, Xmin, Ygrad, Ymin;

public:
    QtMapNomenclature(QWidget *parent = Q_NULLPTR);
    void transformation_of_coordinates(double& x, double& y);

private slots:
    void calculation();

private:
    QtSecondWidget* sWidget;
};
