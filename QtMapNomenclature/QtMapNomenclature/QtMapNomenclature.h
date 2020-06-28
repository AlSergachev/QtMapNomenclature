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

public:
    QtMapNomenclature(QWidget *parent = Q_NULLPTR);
    
private:
    Ui::QtMapNomenclatureClass ui;
    double x, y;
    int Xgrad, Xmin, Ygrad, Ymin, Xsec, Ysec;

private slots:
    void one_million_clicked();

private:
    QtSecondWidget* sWidget;
};
