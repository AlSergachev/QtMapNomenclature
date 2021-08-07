/********************************************************************************
** Form generated from reading UI file 'qthint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHINT_H
#define UI_QTHINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtHint
{
public:
    QLabel *image;

    void setupUi(QWidget *QtHint)
    {
        if (QtHint->objectName().isEmpty())
            QtHint->setObjectName(QString::fromUtf8("QtHint"));
        QtHint->resize(680, 660);
        QtHint->setMinimumSize(QSize(680, 660));
        QtHint->setMaximumSize(QSize(680, 660));
        image = new QLabel(QtHint);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(0, 0, 681, 661));
        image->setPixmap(QPixmap(QString::fromUtf8("png/\320\250\320\224.png")));
        image->setScaledContents(false);

        retranslateUi(QtHint);

        QMetaObject::connectSlotsByName(QtHint);
    } // setupUi

    void retranslateUi(QWidget *QtHint)
    {
        QtHint->setWindowTitle(QApplication::translate("QtHint", "QtHint", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtHint: public Ui_QtHint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHINT_H
