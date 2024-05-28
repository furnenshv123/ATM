/********************************************************************************
** Form generated from reading UI file 'checkprint.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKPRINT_H
#define UI_CHECKPRINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckPrint
{
public:
    QPushButton *continueButton;
    QTextEdit *textEdit;
    QLabel *questionLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *noChoiceBtn;
    QPushButton *yesChoiceBtn;
    QGroupBox *wait_group;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;

    void setupUi(QWidget *CheckPrint)
    {
        if (CheckPrint->objectName().isEmpty())
            CheckPrint->setObjectName("CheckPrint");
        CheckPrint->resize(775, 454);
        CheckPrint->setMinimumSize(QSize(775, 454));
        CheckPrint->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        CheckPrint->setWindowIcon(icon);
        continueButton = new QPushButton(CheckPrint);
        continueButton->setObjectName("continueButton");
        continueButton->setGeometry(QRect(590, 320, 161, 51));
        QFont font;
        font.setBold(true);
        continueButton->setFont(font);
        continueButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));
        textEdit = new QTextEdit(CheckPrint);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(230, 10, 351, 431));
        questionLabel = new QLabel(CheckPrint);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(-10, -10, 791, 71));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        questionLabel->setFont(font1);
        questionLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        questionLabel->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(CheckPrint);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(470, 380, 288, 53));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        noChoiceBtn = new QPushButton(layoutWidget);
        noChoiceBtn->setObjectName("noChoiceBtn");
        noChoiceBtn->setMinimumSize(QSize(140, 51));
        noChoiceBtn->setFont(font);
        noChoiceBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgb(128, 0, 0), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-clear-1632708.png"), QSize(), QIcon::Normal, QIcon::Off);
        noChoiceBtn->setIcon(icon1);

        horizontalLayout->addWidget(noChoiceBtn);

        yesChoiceBtn = new QPushButton(layoutWidget);
        yesChoiceBtn->setObjectName("yesChoiceBtn");
        yesChoiceBtn->setMinimumSize(QSize(140, 51));
        yesChoiceBtn->setFont(font);
        yesChoiceBtn->setLayoutDirection(Qt::RightToLeft);
        yesChoiceBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/pictures/free-icon-check-mark-5299035.png"), QSize(), QIcon::Normal, QIcon::Off);
        yesChoiceBtn->setIcon(icon2);

        horizontalLayout->addWidget(yesChoiceBtn);

        wait_group = new QGroupBox(CheckPrint);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(200, -20, 431, 491));
        wait_group->setMinimumSize(QSize(0, 454));
        wait_group->setAutoFillBackground(false);
        wait_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView_2 = new QGraphicsView(wait_group);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(10, 40, 411, 391));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_2 = new QLabel(wait_group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 440, 201, 31));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);

        retranslateUi(CheckPrint);

        QMetaObject::connectSlotsByName(CheckPrint);
    } // setupUi

    void retranslateUi(QWidget *CheckPrint)
    {
        CheckPrint->setWindowTitle(QCoreApplication::translate("CheckPrint", "Form", nullptr));
        continueButton->setText(QCoreApplication::translate("CheckPrint", "\320\236\320\232", nullptr));
        questionLabel->setText(QCoreApplication::translate("CheckPrint", "\320\237\320\265\321\207\320\260\321\202\320\260\321\202\321\214 \321\207\320\265\320\272?", nullptr));
        noChoiceBtn->setText(QCoreApplication::translate("CheckPrint", "\320\235\320\265\321\202", nullptr));
        yesChoiceBtn->setText(QCoreApplication::translate("CheckPrint", "\320\224\320\260", nullptr));
        wait_group->setTitle(QCoreApplication::translate("CheckPrint", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("CheckPrint", "\320\227\320\260\320\261\320\265\321\200\320\270\321\202\320\265 \321\207\320\265\320\272...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckPrint: public Ui_CheckPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKPRINT_H
