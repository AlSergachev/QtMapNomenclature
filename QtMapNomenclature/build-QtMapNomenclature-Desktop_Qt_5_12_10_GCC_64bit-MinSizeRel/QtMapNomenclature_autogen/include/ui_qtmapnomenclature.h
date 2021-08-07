/********************************************************************************
** Form generated from reading UI file 'qtmapnomenclature.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMAPNOMENCLATURE_H
#define UI_QTMAPNOMENCLATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtMapNomenclature
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QFrame *line_9;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *line_7;
    QSpacerItem *verticalSpacer;
    QFrame *line_8;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_5;
    QLabel *coordinates;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *help;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *latitude;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_lng_gr;
    QLabel *label_10;
    QSpinBox *spinBox_lng_min;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_lng_sec;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *longitude;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_lt_gr;
    QLabel *label_6;
    QSpinBox *spinBox_lt_min;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_lt_sec;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *scale;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *calculation;
    QSpacerItem *horizontalSpacer_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtMapNomenclature)
    {
        if (QtMapNomenclature->objectName().isEmpty())
            QtMapNomenclature->setObjectName(QString::fromUtf8("QtMapNomenclature"));
        QtMapNomenclature->resize(568, 393);
        QtMapNomenclature->setMinimumSize(QSize(565, 0));
        QtMapNomenclature->setMaximumSize(QSize(80000, 44800));
        centralWidget = new QWidget(QtMapNomenclature);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 551, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 8, -1, -1);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(415, 0));
        label->setMaximumSize(QSize(415, 16777215));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(true);
        label->setWordWrap(true);

        horizontalLayout_5->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        line_9 = new QFrame(verticalLayoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setMinimumSize(QSize(0, 100));
        line_9->setMaximumSize(QSize(16777215, 100));
        line_9->setFrameShadow(QFrame::Sunken);
        line_9->setLineWidth(2);
        line_9->setFrameShape(QFrame::VLine);

        horizontalLayout_5->addWidget(line_9);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(0, 100));
        line_5->setMaximumSize(QSize(0, 100));
        line_5->setSizeIncrement(QSize(0, 100));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::VLine);

        horizontalLayout_5->addWidget(line_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3->setContentsMargins(0, -1, -1, 0);
        line_7 = new QFrame(verticalLayoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setMinimumSize(QSize(100, 0));
        line_7->setMaximumSize(QSize(100, 16777215));
        line_7->setFrameShadow(QFrame::Sunken);
        line_7->setLineWidth(2);
        line_7->setMidLineWidth(0);
        line_7->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_7);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        line_8 = new QFrame(verticalLayoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(70);
        sizePolicy.setVerticalStretch(70);
        sizePolicy.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy);
        line_8->setMinimumSize(QSize(100, 0));
        line_8->setMaximumSize(QSize(100, 16777215));
        line_8->setFrameShadow(QFrame::Sunken);
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_8);


        horizontalLayout_5->addLayout(verticalLayout_3);

        line_6 = new QFrame(verticalLayoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setMinimumSize(QSize(0, 100));
        line_6->setMaximumSize(QSize(16777215, 100));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::VLine);

        horizontalLayout_5->addWidget(line_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_12 = new QSpacerItem(440, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);

        coordinates = new QLabel(verticalLayoutWidget);
        coordinates->setObjectName(QString::fromUtf8("coordinates"));
        coordinates->setMinimumSize(QSize(0, 35));
        coordinates->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setPointSize(13);
        font1.setKerning(true);
        coordinates->setFont(font1);
        coordinates->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout->addWidget(coordinates);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        help = new QPushButton(verticalLayoutWidget);
        help->setObjectName(QString::fromUtf8("help"));
        help->setMinimumSize(QSize(0, 120));
        help->setMaximumSize(QSize(25, 16777215));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        help->setFont(font2);

        horizontalLayout_2->addWidget(help);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        latitude = new QLabel(verticalLayoutWidget);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        QFont font3;
        font3.setPointSize(13);
        latitude->setFont(font3);

        horizontalLayout_4->addWidget(latitude);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        spinBox_lng_gr = new QSpinBox(verticalLayoutWidget);
        spinBox_lng_gr->setObjectName(QString::fromUtf8("spinBox_lng_gr"));
        QFont font4;
        font4.setPointSize(11);
        spinBox_lng_gr->setFont(font4);
        spinBox_lng_gr->setMinimum(32);
        spinBox_lng_gr->setMaximum(79);
        spinBox_lng_gr->setValue(52);
        spinBox_lng_gr->setDisplayIntegerBase(10);

        horizontalLayout_4->addWidget(spinBox_lng_gr);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        horizontalLayout_4->addWidget(label_10);

        spinBox_lng_min = new QSpinBox(verticalLayoutWidget);
        spinBox_lng_min->setObjectName(QString::fromUtf8("spinBox_lng_min"));
        spinBox_lng_min->setFont(font4);
        spinBox_lng_min->setMinimum(0);
        spinBox_lng_min->setMaximum(59);
        spinBox_lng_min->setValue(44);

        horizontalLayout_4->addWidget(spinBox_lng_min);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_4->addWidget(label_11);

        doubleSpinBox_lng_sec = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_lng_sec->setObjectName(QString::fromUtf8("doubleSpinBox_lng_sec"));
        doubleSpinBox_lng_sec->setFont(font4);
        doubleSpinBox_lng_sec->setDecimals(4);
        doubleSpinBox_lng_sec->setMaximum(59.999899999999997);
        doubleSpinBox_lng_sec->setSingleStep(0.000100000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_lng_sec);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        longitude = new QLabel(verticalLayoutWidget);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setFont(font3);

        horizontalLayout_3->addWidget(longitude);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        spinBox_lt_gr = new QSpinBox(verticalLayoutWidget);
        spinBox_lt_gr->setObjectName(QString::fromUtf8("spinBox_lt_gr"));
        spinBox_lt_gr->setFont(font4);
        spinBox_lt_gr->setMinimum(0);
        spinBox_lt_gr->setMaximum(179);
        spinBox_lt_gr->setValue(30);
        spinBox_lt_gr->setDisplayIntegerBase(10);

        horizontalLayout_3->addWidget(spinBox_lt_gr);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        horizontalLayout_3->addWidget(label_6);

        spinBox_lt_min = new QSpinBox(verticalLayoutWidget);
        spinBox_lt_min->setObjectName(QString::fromUtf8("spinBox_lt_min"));
        spinBox_lt_min->setFont(font4);
        spinBox_lt_min->setMinimum(0);
        spinBox_lt_min->setMaximum(59);
        spinBox_lt_min->setValue(44);

        horizontalLayout_3->addWidget(spinBox_lt_min);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        horizontalLayout_3->addWidget(label_7);

        doubleSpinBox_lt_sec = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_lt_sec->setObjectName(QString::fromUtf8("doubleSpinBox_lt_sec"));
        doubleSpinBox_lt_sec->setFont(font4);
        doubleSpinBox_lt_sec->setDecimals(4);
        doubleSpinBox_lt_sec->setMaximum(59.999899999999997);
        doubleSpinBox_lt_sec->setSingleStep(0.000100000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_lt_sec);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 13, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        scale = new QLabel(verticalLayoutWidget);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimumSize(QSize(0, 20));
        scale->setMaximumSize(QSize(16777215, 30));
        scale->setFont(font3);

        horizontalLayout->addWidget(scale);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(140, 25));
        comboBox->setFont(font4);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        calculation = new QPushButton(verticalLayoutWidget);
        calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->setMinimumSize(QSize(110, 30));
        calculation->setMaximumSize(QSize(110, 30));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setWeight(50);
        calculation->setFont(font5);

        horizontalLayout->addWidget(calculation);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        QtMapNomenclature->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtMapNomenclature);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtMapNomenclature->setStatusBar(statusBar);

        retranslateUi(QtMapNomenclature);

        QMetaObject::connectSlotsByName(QtMapNomenclature);
    } // setupUi

    void retranslateUi(QMainWindow *QtMapNomenclature)
    {
        QtMapNomenclature->setWindowTitle(QApplication::translate("QtMapNomenclature", "QtMapNomenclature", nullptr));
        label->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#7faeb0;\">Map nomenclature</span></p><p>- \321\215\321\202\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\275\320\260 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\321\213 \320\272\320\260\321\200\321\202 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \320\274\320\260\321\201\321\210\321\202\320\260\320\261\320\276\320\262 \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\270\321\205 \321\200\320\260\320\274\320\276\320\272. \320\240\320\260\320\261\320\276\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274"
                        "\320\274\321\213 \320\276\320\263\320\260\320\275\320\270\321\207\320\270\320\262\320\260\320\265\321\202\321\201\321\217 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\320\260\320\274\320\270.</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("QtMapNomenclature", "80\302\260", nullptr));
        label_3->setText(QApplication::translate("QtMapNomenclature", "32\302\260", nullptr));
        label_4->setText(QApplication::translate("QtMapNomenclature", "0\302\260", nullptr));
        label_5->setText(QApplication::translate("QtMapNomenclature", "180\302\260", nullptr));
        coordinates->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213</span></p></body></html>", nullptr));
        help->setText(QApplication::translate("QtMapNomenclature", "H\n"
"E\n"
"L\n"
"P", nullptr));
        latitude->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\250\320\270\321\200\320\276\321\202\320\260 (B):</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\302\260</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">'</span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">''</span></p></body></html>", nullptr));
        longitude->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\224\320\276\320\273\320\263\320\276\321\202\320\260 (L):</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\302\260</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">'</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">''</span></p></body></html>", nullptr));
        scale->setText(QApplication::translate("QtMapNomenclature", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\274\320\260\321\201\321\210\321\202\320\260\320\261</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("QtMapNomenclature", "\320\234 1 : 1 000 000", nullptr));
        comboBox->setItemText(2, QApplication::translate("QtMapNomenclature", "\320\234 1 : 100 000", nullptr));
        comboBox->setItemText(3, QApplication::translate("QtMapNomenclature", "\320\234 1 : 50 000", nullptr));
        comboBox->setItemText(4, QApplication::translate("QtMapNomenclature", "\320\234 1 : 25 000", nullptr));
        comboBox->setItemText(5, QApplication::translate("QtMapNomenclature", "\320\234 1 : 10 000", nullptr));
        comboBox->setItemText(6, QApplication::translate("QtMapNomenclature", "\320\234 1 : 5 000", nullptr));
        comboBox->setItemText(7, QApplication::translate("QtMapNomenclature", "\320\234 1 : 2 000", nullptr));

        calculation->setText(QApplication::translate("QtMapNomenclature", "\320\240\320\260\321\201\321\207\321\221\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtMapNomenclature: public Ui_QtMapNomenclature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMAPNOMENCLATURE_H
