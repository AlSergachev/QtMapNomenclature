#include "QtMapNomenclature.h"
#include <QTextCodec>		///

QtMapNomenclature::QtMapNomenclature(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.calculation, SIGNAL(clicked()), this, SLOT(calculation));
}

void QtMapNomenclature::transformation_of_coordinates(double& x, double& y)
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
}

void QtMapNomenclature::calculation()
{
	transformation_of_coordinates(x, y);
	if (ui.comboBox->currentIndex()==0)
		QMessageBox::warning(this, "Error", "Select scale");
	else if (ui.comboBox->currentIndex() == 1)
	{
		sWidget = new QtSecondWidget(x, y, "One_million");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 2)
	{
		sWidget = new QtSecondWidget(x, y, "One_hundred_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 3)
	{
		sWidget = new QtSecondWidget(x, y, "Fifty_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 4)
	{
		sWidget = new QtSecondWidget(x, y, "Twenty_five_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 5)
	{
		sWidget = new QtSecondWidget(x, y, "Ten_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 6)
	{
		sWidget = new QtSecondWidget(x, y, "Five_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
	else if (ui.comboBox->currentIndex() == 7)
	{
		sWidget = new QtSecondWidget(x, y, "Two_thousand");					//Создаём новое окно, в которое сразу преедаём наши координаты
		sWidget->show();									//Показываем это окно 	
	}
}