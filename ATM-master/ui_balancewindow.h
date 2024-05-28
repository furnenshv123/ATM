/********************************************************************************
** Form generated from reading UI file 'balancewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEWINDOW_H
#define UI_BALANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BalanceWindow
{
public:
    QLabel *label;
    QLabel *balanceLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *BalanceWindow)
    {
        if (BalanceWindow->objectName().isEmpty())
            BalanceWindow->setObjectName("BalanceWindow");
        BalanceWindow->resize(775, 454);
        BalanceWindow->setMinimumSize(QSize(775, 454));
        BalanceWindow->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        BalanceWindow->setWindowIcon(icon);
        BalanceWindow->setAutoFillBackground(false);
        BalanceWindow->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(BalanceWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -10, 801, 91));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label->setAlignment(Qt::AlignCenter);
        balanceLabel = new QLabel(BalanceWindow);
        balanceLabel->setObjectName("balanceLabel");
        balanceLabel->setGeometry(QRect(370, 170, 401, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setItalic(true);
        balanceLabel->setFont(font1);
        balanceLabel->setStyleSheet(QString::fromUtf8("text-align: center;"));
        pushButton = new QPushButton(BalanceWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 360, 251, 71));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setLayoutDirection(Qt::RightToLeft);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 35px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-play-4210629.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setCheckable(false);

        retranslateUi(BalanceWindow);

        QMetaObject::connectSlotsByName(BalanceWindow);
    } // setupUi

    void retranslateUi(QWidget *BalanceWindow)
    {
        BalanceWindow->setWindowTitle(QCoreApplication::translate("BalanceWindow", "Balance", nullptr));
        label->setText(QCoreApplication::translate("BalanceWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \321\201\321\207\320\265\321\202\320\265", nullptr));
        balanceLabel->setText(QCoreApplication::translate("BalanceWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("BalanceWindow", " \320\236\320\232", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class BalanceWindow: public Ui_BalanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEWINDOW_H
