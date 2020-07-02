#include "QtMapNomenclature.h"


QtMapNomenclature::QtMapNomenclature(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	
	connect(ui.M1000000, SIGNAL(clicked()), this, SLOT(one_million_clicked));
}

void QtMapNomenclature::one_million_clicked()
{
	//Преобразуем координаты в десятичные значения
	Xgrad = ui.spinBox_lng_gr->value();
	Xmin = ui.spinBox_lng_min->value();
	Xsec = ui.doubleSpinBox_lng_sec->value();
	Ygrad = ui.spinBox_lt_gr->value();
	Ymin = ui.spinBox_lt_min->value();
	Ysec = ui.doubleSpinBox_lt_sec->value();
	x = Xgrad + (Xmin / 60.) + (Xsec / 3600.);
	y = Ygrad + (Ymin / 60.) + (Ysec / 3600.);

	//sWidget = new QtSecondWidget(X.setNum(x), Y.setNum(y));				
	sWidget = new QtSecondWidget(x, y);					//Создаём новое окно, в которое сразу преедаём наши координаты
	sWidget->show();									//Показываем это окно 												

}