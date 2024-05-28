/********************************************************************************
** Form generated from reading UI file 'choicecountinuewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICECOUNTINUEWINDOW_H
#define UI_CHOICECOUNTINUEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choiceCountinueWindow
{
public:
    QLabel *label;
    QGroupBox *giveCard_group;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yesButton;
    QPushButton *noButton;
    QGroupBox *choiceMarkGroup;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *badSmile;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *midSmile;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *goodSmile;

    void setupUi(QWidget *choiceCountinueWindow)
    {
        if (choiceCountinueWindow->objectName().isEmpty())
            choiceCountinueWindow->setObjectName("choiceCountinueWindow");
        choiceCountinueWindow->resize(775, 454);
        choiceCountinueWindow->setMinimumSize(QSize(775, 454));
        choiceCountinueWindow->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        choiceCountinueWindow->setWindowIcon(icon);
        label = new QLabel(choiceCountinueWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -10, 791, 81));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label->setAlignment(Qt::AlignCenter);
        giveCard_group = new QGroupBox(choiceCountinueWindow);
        giveCard_group->setObjectName("giveCard_group");
        giveCard_group->setGeometry(QRect(165, -30, 431, 491));
        giveCard_group->setMinimumSize(QSize(0, 454));
        giveCard_group->setAutoFillBackground(false);
        giveCard_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView_2 = new QGraphicsView(giveCard_group);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(10, 40, 411, 391));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_2 = new QLabel(giveCard_group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 440, 151, 31));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        layoutWidget = new QWidget(choiceCountinueWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 380, 741, 63));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yesButton = new QPushButton(layoutWidget);
        yesButton->setObjectName("yesButton");
        yesButton->setMinimumSize(QSize(191, 61));
        yesButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-check-mark-5299035.png"), QSize(), QIcon::Normal, QIcon::Off);
        yesButton->setIcon(icon1);
        yesButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(yesButton);

        noButton = new QPushButton(layoutWidget);
        noButton->setObjectName("noButton");
        noButton->setMinimumSize(QSize(191, 61));
        noButton->setLayoutDirection(Qt::RightToLeft);
        noButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgb(128, 0, 0), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/pictures/free-icon-clear-1632708.png"), QSize(), QIcon::Normal, QIcon::Off);
        noButton->setIcon(icon2);
        noButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(noButton);

        choiceMarkGroup = new QGroupBox(choiceCountinueWindow);
        choiceMarkGroup->setObjectName("choiceMarkGroup");
        choiceMarkGroup->setGeometry(QRect(20, 130, 761, 91));
        choiceMarkGroup->setStyleSheet(QString::fromUtf8("border:none;"));
        layoutWidget1 = new QWidget(choiceMarkGroup);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 10, 741, 72));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        badSmile = new QPushButton(layoutWidget1);
        badSmile->setObjectName("badSmile");
        badSmile->setMinimumSize(QSize(70, 70));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/pictures/free-icon-sadness-7198866.png"), QSize(), QIcon::Normal, QIcon::Off);
        badSmile->setIcon(icon3);
        badSmile->setIconSize(QSize(50, 50));
        badSmile->setFlat(true);

        horizontalLayout_2->addWidget(badSmile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        midSmile = new QPushButton(layoutWidget1);
        midSmile->setObjectName("midSmile");
        midSmile->setMinimumSize(QSize(70, 70));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/pictures/free-icon-meh-927557.png"), QSize(), QIcon::Normal, QIcon::Off);
        midSmile->setIcon(icon4);
        midSmile->setIconSize(QSize(50, 50));
        midSmile->setFlat(true);

        horizontalLayout_2->addWidget(midSmile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        goodSmile = new QPushButton(layoutWidget1);
        goodSmile->setObjectName("goodSmile");
        goodSmile->setMinimumSize(QSize(70, 70));
        goodSmile->setMaximumSize(QSize(70, 70));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/pictures/free-icon-smile-1794767.png"), QSize(), QIcon::Normal, QIcon::Off);
        goodSmile->setIcon(icon5);
        goodSmile->setIconSize(QSize(50, 50));
        goodSmile->setFlat(true);

        horizontalLayout_2->addWidget(goodSmile);


        retranslateUi(choiceCountinueWindow);

        QMetaObject::connectSlotsByName(choiceCountinueWindow);
    } // setupUi

    void retranslateUi(QWidget *choiceCountinueWindow)
    {
        choiceCountinueWindow->setWindowTitle(QCoreApplication::translate("choiceCountinueWindow", "choiceCountinue", nullptr));
        label->setText(QCoreApplication::translate("choiceCountinueWindow", "\320\226\320\265\320\273\320\260\320\265\321\202\320\265 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214?", nullptr));
        giveCard_group->setTitle(QCoreApplication::translate("choiceCountinueWindow", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("choiceCountinueWindow", "\320\227\320\260\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\260\321\200\321\202\321\203", nullptr));
        yesButton->setText(QCoreApplication::translate("choiceCountinueWindow", "\320\224\320\260", nullptr));
        noButton->setText(QCoreApplication::translate("choiceCountinueWindow", "\320\235\320\265\321\202", nullptr));
        choiceMarkGroup->setTitle(QString());
        badSmile->setText(QString());
        midSmile->setText(QString());
        goodSmile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class choiceCountinueWindow: public Ui_choiceCountinueWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICECOUNTINUEWINDOW_H
