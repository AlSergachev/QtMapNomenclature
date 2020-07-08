#include "QtMapNomenclature.h"

QtMapNomenclature::QtMapNomenclature(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.help, SIGNAL(clicked()), this, SLOT(toHelp));
	connect(ui.calculation, SIGNAL(clicked()), this, SLOT(calculation));
}

void QtMapNomenclature::transformationOfCoordinates(double& x, double& y)
{
	x_grad = ui.spinBox_lng_gr->value();
	x_min = ui.spinBox_lng_min->value();
	x_sec = ui.doubleSpinBox_lng_sec->value();
	y_grad = ui.spinBox_lt_gr->value();
	y_min = ui.spinBox_lt_min->value();
	y_sec = ui.doubleSpinBox_lt_sec->value();
	x = x_grad + (x_min / 60.) + (x_sec / 3600.);
	y = y_grad + (y_min / 60.) + (y_sec / 3600.);
}

void QtMapNomenclature::toHelp()
{
	sHint = new QtHint();
	sHint->setWindowModality(Qt::ApplicationModal);
	sHint->setWindowTitle("Help");
	sHint->setWindowIcon(QIcon(":/new/png/map.ico"));
	sHint->show();
}

void QtMapNomenclature::calculation()
{
	transformationOfCoordinates(x, y);
	switch ((ui.comboBox->currentIndex()))
	{
	case 0:
		QMessageBox::warning(this, "Error", "Select scale");
		break;
	case 1:
		sWidget = new QtSecondWidget(x, y, "One_million");
		sWidget->setWindowTitle("One million");
		break;
	case 2:
		sWidget = new QtSecondWidget(x, y, "One_hundred_thousand");
		sWidget->setWindowTitle("One hundred thousand");
		break;
	case 3:
		sWidget = new QtSecondWidget(x, y, "Fifty_thousand");
		sWidget->setWindowTitle("Fifty thousand");
		break;
	case 4:
		sWidget = new QtSecondWidget(x, y, "Twenty_five_thousand");
		sWidget->setWindowTitle("Twenty five thousand");
		break;
	case 5:
		sWidget = new QtSecondWidget(x, y, "Ten_thousand");
		sWidget->setWindowTitle("Ten thousand");
		break;
	case 6:
		sWidget = new QtSecondWidget(x, y, "Five_thousand");
		sWidget->setWindowTitle("Five thousand");
		break;
	case 7:
		sWidget = new QtSecondWidget(x, y, "Two_thousand");
		sWidget->setWindowTitle("Two thousand");
		break;
	}

	if (ui.comboBox->currentIndex() != 0)
	{
		sWidget->setWindowIcon(QIcon(":/new/png/map.ico"));
		sWidget->show();
	}
}
