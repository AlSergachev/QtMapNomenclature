/********************************************************************************
** Form generated from reading UI file 'qtsecondwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSECONDWIDGET_H
#define UI_QTSECONDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSecondWidget
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_scale;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Ngr;
    QLabel *label_2;
    QLabel *label_Nmin;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Sgr;
    QLabel *label_5;
    QLabel *label_Smin;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_4;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_nomenclature;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_3;
    QFrame *line_5;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_Wgr;
    QLabel *label_6;
    QLabel *label_Wmin;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_Egr;
    QLabel *label_7;
    QLabel *label_Emin;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_X;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Y;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *QtSecondWidget)
    {
        if (QtSecondWidget->objectName().isEmpty())
            QtSecondWidget->setObjectName(QString::fromUtf8("QtSecondWidget"));
        QtSecondWidget->resize(548, 548);
        QtSecondWidget->setMinimumSize(QSize(548, 548));
        QtSecondWidget->setMaximumSize(QSize(548, 548));
        verticalLayoutWidget_3 = new QWidget(QtSecondWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 531, 541));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_scale = new QLabel(verticalLayoutWidget_3);
        label_scale->setObjectName(QString::fromUtf8("label_scale"));
        label_scale->setMinimumSize(QSize(400, 80));
        label_scale->setMaximumSize(QSize(16777215, 80000));
        QFont font;
        font.setFamily(QString::fromUtf8("Candara Light"));
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_scale->setFont(font);
        label_scale->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_scale->setLayoutDirection(Qt::LeftToRight);
        label_scale->setAlignment(Qt::AlignCenter);
        label_scale->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(label_scale);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/png/file96.png")));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_Ngr = new QLabel(verticalLayoutWidget_3);
        label_Ngr->setObjectName(QString::fromUtf8("label_Ngr"));
        QFont font1;
        font1.setPointSize(11);
        label_Ngr->setFont(font1);
        label_Ngr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(label_Ngr);

        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(label_2);

        label_Nmin = new QLabel(verticalLayoutWidget_3);
        label_Nmin->setObjectName(QString::fromUtf8("label_Nmin"));
        label_Nmin->setFont(font1);
        label_Nmin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(label_Nmin);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Sgr = new QLabel(verticalLayoutWidget_3);
        label_Sgr->setObjectName(QString::fromUtf8("label_Sgr"));
        label_Sgr->setFont(font1);
        label_Sgr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(label_Sgr);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(label_5);

        label_Smin = new QLabel(verticalLayoutWidget_3);
        label_Smin->setObjectName(QString::fromUtf8("label_Smin"));
        label_Smin->setFont(font1);
        label_Smin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(label_Smin);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_3);

        line_4 = new QFrame(verticalLayoutWidget_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(0, 350));
        line_4->setMaximumSize(QSize(16777215, 350));
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::VLine);

        horizontalLayout_7->addWidget(line_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        line_2 = new QFrame(verticalLayoutWidget_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(350, 0));
        line_2->setMaximumSize(QSize(350, 16777215));
        line_2->setLayoutDirection(Qt::LeftToRight);
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        label_nomenclature = new QLabel(verticalLayoutWidget_3);
        label_nomenclature->setObjectName(QString::fromUtf8("label_nomenclature"));
        label_nomenclature->setMinimumSize(QSize(350, 0));
        label_nomenclature->setMaximumSize(QSize(350, 55));
        label_nomenclature->setFont(font);
        label_nomenclature->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_nomenclature->setLayoutDirection(Qt::LeftToRight);
        label_nomenclature->setAutoFillBackground(false);
        label_nomenclature->setScaledContents(false);
        label_nomenclature->setAlignment(Qt::AlignCenter);
        label_nomenclature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(label_nomenclature);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        line_3 = new QFrame(verticalLayoutWidget_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(350, 0));
        line_3->setMaximumSize(QSize(350, 16777215));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_3);


        horizontalLayout_7->addLayout(verticalLayout_4);

        line_5 = new QFrame(verticalLayoutWidget_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(0, 350));
        line_5->setMaximumSize(QSize(16777215, 350));
        line_5->setFrameShadow(QFrame::Raised);
        line_5->setLineWidth(5);
        line_5->setFrameShape(QFrame::VLine);

        horizontalLayout_7->addWidget(line_5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_Wgr = new QLabel(verticalLayoutWidget_3);
        label_Wgr->setObjectName(QString::fromUtf8("label_Wgr"));
        label_Wgr->setFont(font1);
        label_Wgr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_Wgr);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_6);

        label_Wmin = new QLabel(verticalLayoutWidget_3);
        label_Wmin->setObjectName(QString::fromUtf8("label_Wmin"));
        label_Wmin->setFont(font1);
        label_Wmin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_Wmin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_Egr = new QLabel(verticalLayoutWidget_3);
        label_Egr->setObjectName(QString::fromUtf8("label_Egr"));
        label_Egr->setFont(font1);
        label_Egr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_Egr);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_7);

        label_Emin = new QLabel(verticalLayoutWidget_3);
        label_Emin->setObjectName(QString::fromUtf8("label_Emin"));
        label_Emin->setFont(font1);
        label_Emin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_Emin);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        line = new QFrame(verticalLayoutWidget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_X = new QLabel(verticalLayoutWidget_3);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setMinimumSize(QSize(100, 0));
        label_X->setMaximumSize(QSize(16777215, 30));
        label_X->setFont(font2);
        label_X->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_X->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_X);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_Y = new QLabel(verticalLayoutWidget_3);
        label_Y->setObjectName(QString::fromUtf8("label_Y"));
        label_Y->setMinimumSize(QSize(100, 0));
        label_Y->setMaximumSize(QSize(16777215, 30));
        label_Y->setFont(font2);
        label_Y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Y->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_Y);

        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(QtSecondWidget);

        QMetaObject::connectSlotsByName(QtSecondWidget);
    } // setupUi

    void retranslateUi(QWidget *QtSecondWidget)
    {
        QtSecondWidget->setWindowTitle(QApplication::translate("QtSecondWidget", "QtSecondWidget", nullptr));
        label_scale->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p align=\"center\"> Scale</p></body></html>", nullptr));
        label_4->setText(QString());
        label_Ngr->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
        label_Nmin->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_Sgr->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
        label_Smin->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_nomenclature->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p align=\"center\">N-36-110-\320\222-\320\263-2</p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_Wgr->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
        label_Wmin->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_Egr->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
        label_Emin->setText(QApplication::translate("QtSecondWidget", "TextLabel", nullptr));
        label->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p>\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213:</p></body></html>", nullptr));
        label_X->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">X_TextLabel</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
        label_Y->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">Y_TextLabel</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("QtSecondWidget", "<html><head/><body><p><span style=\" font-size:10pt;\">\302\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtSecondWidget: public Ui_QtSecondWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSECONDWIDGET_H
