/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *group_start;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGraphicsView *cardView;
    QLabel *label_2;
    QGroupBox *wait_group;
    QGraphicsView *graphicsView;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(775, 454);
        MainWindow->setMinimumSize(QSize(775, 454));
        MainWindow->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        group_start = new QGroupBox(centralwidget);
        group_start->setObjectName("group_start");
        group_start->setEnabled(true);
        group_start->setGeometry(QRect(-10, -10, 811, 491));
        group_start->setFlat(false);
        layoutWidget = new QWidget(group_start);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 360, 744, 43));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(181, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border:2px solid #006400;\n"
"color:#006400;\n"
"background-color:rgba(211, 211, 211, 255);\n"
"border-radius:10px;\n"
""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(181, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("border:2px solid #006400;\n"
"color:#006400;\n"
"background-color:rgba(211, 211, 211, 255);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(181, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("border:2px solid #006400;\n"
"color:#006400;\n"
"background-color:rgba(211, 211, 211, 255);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(181, 41));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("border:2px solid #006400;\n"
"color:#006400;\n"
"background-color:rgba(211, 211, 211, 255);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(pushButton_4);

        cardView = new QGraphicsView(group_start);
        cardView->setObjectName("cardView");
        cardView->setGeometry(QRect(163, 60, 471, 271));
        cardView->setStyleSheet(QString::fromUtf8("background:transparent"));
        label_2 = new QLabel(group_start);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 791, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label_2->setAlignment(Qt::AlignCenter);
        wait_group = new QGroupBox(centralwidget);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(185, -40, 431, 491));
        wait_group->setMinimumSize(QSize(0, 454));
        wait_group->setAutoFillBackground(false);
        wait_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView = new QGraphicsView(wait_group);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 40, 411, 391));
        graphicsView->setStyleSheet(QString::fromUtf8("background: transparent"));
        label = new QLabel(wait_group);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 370, 131, 71));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 775, 21));
        menubar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Start", nullptr));
        group_start->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Insert card 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Insert card 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Insert card 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Insert card 4", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ASB Bank", nullptr));
        wait_group->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Wait... </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">\320\237\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265...</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
