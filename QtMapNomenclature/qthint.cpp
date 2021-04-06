#include "qthint.h"
#include "ui_qthint.h"
#include <QPixmap>

QtHint::QtHint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QtHint)
{
    ui->setupUi(this);
    QPixmap pix(":/new/png/ШД.png");
    double w = ui->image->width();
    double h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));


}

QtHint::~QtHint()
{
    delete ui;
}
