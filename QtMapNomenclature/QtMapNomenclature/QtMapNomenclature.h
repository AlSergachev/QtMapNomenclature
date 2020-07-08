#pragma once

#include <QtWidgets/QMainWindow>
#include "qmainwindow.h"
#include "ui_QtMapNomenclature.h"
#include "QtSecondWidget.h"
#include "QtHint.h"

using namespace std;

class QtMapNomenclature : public QMainWindow
{
    Q_OBJECT

private:
    Ui::QtMapNomenclatureClass ui;
    double x, y, x_sec, y_sec;
    int x_grad, x_min, y_grad, y_min;

public:
    QtMapNomenclature(QWidget *parent = Q_NULLPTR);
    void transformationOfCoordinates(double& x, double& y);           //ѕреобразуем координаты в дес€тичные значени€

private slots:
    void calculation();
    void toHelp();

private:
    QtHint* sHint;
    QtSecondWidget* sWidget;
};
