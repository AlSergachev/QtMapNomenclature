#include "QtMapNomenclature.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtMapNomenclature w;
    w.setWindowTitle("Map nomenclature");
    w.setWindowIcon(QIcon(":/new/png/map.ico"));
    w.show();
    return a.exec();
}
