#ifndef QTMAPNOMENCLATURE_H
#define QTMAPNOMENCLATURE_H

#include <QMainWindow>
#include "qtsecondwidget.h"
#include "qthint.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtMapNomenclature; }
QT_END_NAMESPACE
using namespace std;

class QtMapNomenclature : public QMainWindow
{
    Q_OBJECT
private:
    Ui::QtMapNomenclature *ui;
    double x, y, x_sec, y_sec;
    int x_grad, x_min, y_grad, y_min;

public:
    QtMapNomenclature(QWidget *parent = nullptr);
    ~QtMapNomenclature();
    void transformationOfCoordinates(double&, double&);           //Ïðåîáðàçóåì êîîðäèíàòû â äåñÿòè÷íûå çíà÷åíèÿ

private slots:
    void calculation();
    void toHelp();

private:
    QtHint* sHint;
    QtSecondWidget* sWidget;

};
#endif // QTMAPNOMENCLATURE_H
