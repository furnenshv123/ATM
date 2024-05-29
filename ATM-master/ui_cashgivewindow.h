/********************************************************************************
** Form generated from reading UI file 'cashgivewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHGIVEWINDOW_H
#define UI_CASHGIVEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashGiveWindow
{
public:
    QLabel *main_label;
    QStackedWidget *stackedWidget;
    QWidget *choice_sum_page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *FiveButton;
    QPushButton *TenButton;
    QPushButton *TwentyButton;
    QPushButton *cancelCashButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *fiftyButton;
    QPushButton *oneHundredButton;
    QPushButton *twoHundredButton;
    QPushButton *otherSumButton;
    QLabel *errorStack;
    QWidget *choice_cash_page;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QPushButton *variantCashOne;
    QSpacerItem *verticalSpacer;
    QPushButton *variantCashTwo;
    QGroupBox *giveCahs_group;
    QGraphicsView *graphicsView;
    QLabel *label_5;
    QGroupBox *otherSum_groupBox;
    QLineEdit *otherLineEdit;
    QLabel *label_2;
    QLabel *errorLabel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertButtonOther;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelButtonOther;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *correctButtonOther;

    void setupUi(QWidget *CashGiveWindow)
    {
        if (CashGiveWindow->objectName().isEmpty())
            CashGiveWindow->setObjectName("CashGiveWindow");
        CashGiveWindow->resize(775, 454);
        CashGiveWindow->setMinimumSize(QSize(775, 454));
        CashGiveWindow->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        CashGiveWindow->setWindowIcon(icon);
        main_label = new QLabel(CashGiveWindow);
        main_label->setObjectName("main_label");
        main_label->setGeometry(QRect(-10, -10, 791, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        main_label->setFont(font);
        main_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        main_label->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(CashGiveWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 70, 781, 381));
        choice_sum_page = new QWidget();
        choice_sum_page->setObjectName("choice_sum_page");
        layoutWidget = new QWidget(choice_sum_page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 751, 371));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        FiveButton = new QPushButton(layoutWidget);
        FiveButton->setObjectName("FiveButton");
        FiveButton->setMinimumSize(QSize(141, 51));
        QFont font1;
        font1.setBold(true);
        FiveButton->setFont(font1);
        FiveButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(FiveButton);

        TenButton = new QPushButton(layoutWidget);
        TenButton->setObjectName("TenButton");
        TenButton->setMinimumSize(QSize(141, 41));
        TenButton->setFont(font1);
        TenButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(TenButton);

        TwentyButton = new QPushButton(layoutWidget);
        TwentyButton->setObjectName("TwentyButton");
        TwentyButton->setMinimumSize(QSize(141, 51));
        TwentyButton->setFont(font1);
        TwentyButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(TwentyButton);

        cancelCashButton = new QPushButton(layoutWidget);
        cancelCashButton->setObjectName("cancelCashButton");
        cancelCashButton->setMinimumSize(QSize(141, 51));
        cancelCashButton->setFont(font1);
        cancelCashButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(cancelCashButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        fiftyButton = new QPushButton(layoutWidget);
        fiftyButton->setObjectName("fiftyButton");
        fiftyButton->setMinimumSize(QSize(141, 51));
        fiftyButton->setFont(font1);
        fiftyButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(fiftyButton);

        oneHundredButton = new QPushButton(layoutWidget);
        oneHundredButton->setObjectName("oneHundredButton");
        oneHundredButton->setMinimumSize(QSize(141, 51));
        oneHundredButton->setFont(font1);
        oneHundredButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(oneHundredButton);

        twoHundredButton = new QPushButton(layoutWidget);
        twoHundredButton->setObjectName("twoHundredButton");
        twoHundredButton->setMinimumSize(QSize(141, 51));
        twoHundredButton->setFont(font1);
        twoHundredButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(twoHundredButton);

        otherSumButton = new QPushButton(layoutWidget);
        otherSumButton->setObjectName("otherSumButton");
        otherSumButton->setMinimumSize(QSize(141, 51));
        otherSumButton->setFont(font1);
        otherSumButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 15px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(otherSumButton);


        horizontalLayout->addLayout(verticalLayout_2);

        errorStack = new QLabel(choice_sum_page);
        errorStack->setObjectName("errorStack");
        errorStack->setGeometry(QRect(170, 80, 441, 71));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        errorStack->setFont(font2);
        errorStack->setStyleSheet(QString::fromUtf8("color:red;"));
        errorStack->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(choice_sum_page);
        choice_cash_page = new QWidget();
        choice_cash_page->setObjectName("choice_cash_page");
        layoutWidget1 = new QWidget(choice_cash_page);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 80, 163, 211));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        variantCashOne = new QPushButton(layoutWidget1);
        variantCashOne->setObjectName("variantCashOne");
        variantCashOne->setMinimumSize(QSize(161, 51));
        variantCashOne->setFont(font1);
        variantCashOne->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:15px;\n"
"margin-right: 10px;\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-play-4210629.png"), QSize(), QIcon::Normal, QIcon::Off);
        variantCashOne->setIcon(icon1);

        verticalLayout_5->addWidget(variantCashOne);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        variantCashTwo = new QPushButton(layoutWidget1);
        variantCashTwo->setObjectName("variantCashTwo");
        variantCashTwo->setMinimumSize(QSize(161, 51));
        variantCashTwo->setFont(font1);
        variantCashTwo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:15px;\n"
"margin-right: 10px;\n"
"border-radius: 10px;"));
        variantCashTwo->setIcon(icon1);

        verticalLayout_5->addWidget(variantCashTwo);

        stackedWidget->addWidget(choice_cash_page);
        giveCahs_group = new QGroupBox(CashGiveWindow);
        giveCahs_group->setObjectName("giveCahs_group");
        giveCahs_group->setGeometry(QRect(165, -30, 431, 491));
        giveCahs_group->setMinimumSize(QSize(0, 454));
        giveCahs_group->setAutoFillBackground(false);
        giveCahs_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView = new QGraphicsView(giveCahs_group);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 40, 411, 391));
        graphicsView->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_5 = new QLabel(giveCahs_group);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 440, 181, 31));
        QFont font3;
        font3.setPointSize(16);
        label_5->setFont(font3);
        otherSum_groupBox = new QGroupBox(CashGiveWindow);
        otherSum_groupBox->setObjectName("otherSum_groupBox");
        otherSum_groupBox->setEnabled(true);
        otherSum_groupBox->setGeometry(QRect(10, 30, 771, 411));
        otherSum_groupBox->setStyleSheet(QString::fromUtf8(""));
        otherLineEdit = new QLineEdit(otherSum_groupBox);
        otherLineEdit->setObjectName("otherLineEdit");
        otherLineEdit->setGeometry(QRect(230, 170, 271, 41));
        otherLineEdit->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        label_2 = new QLabel(otherSum_groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 110, 221, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        label_2->setFont(font4);
        errorLabel = new QLabel(otherSum_groupBox);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(110, 60, 541, 41));
        errorLabel->setFont(font2);
        errorLabel->setStyleSheet(QString::fromUtf8("color:red;"));
        errorLabel->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(otherSum_groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 240, 220, 52));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);

        layoutWidget_3 = new QWidget(otherSum_groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 280, 731, 114));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        insertButtonOther = new QPushButton(layoutWidget_3);
        insertButtonOther->setObjectName("insertButtonOther");
        insertButtonOther->setMinimumSize(QSize(151, 51));
        insertButtonOther->setFont(font1);
        insertButtonOther->setLayoutDirection(Qt::RightToLeft);
        insertButtonOther->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        insertButtonOther->setIcon(icon1);

        horizontalLayout_2->addWidget(insertButtonOther);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cancelButtonOther = new QPushButton(layoutWidget_3);
        cancelButtonOther->setObjectName("cancelButtonOther");
        cancelButtonOther->setMinimumSize(QSize(151, 51));
        cancelButtonOther->setFont(font1);
        cancelButtonOther->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left: 30px;\n"
"border-radius: 10px;"));
        cancelButtonOther->setIcon(icon1);

        horizontalLayout_3->addWidget(cancelButtonOther);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        correctButtonOther = new QPushButton(layoutWidget_3);
        correctButtonOther->setObjectName("correctButtonOther");
        correctButtonOther->setMinimumSize(QSize(151, 51));
        correctButtonOther->setFont(font1);
        correctButtonOther->setLayoutDirection(Qt::RightToLeft);
        correctButtonOther->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #FFD700;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        correctButtonOther->setIcon(icon1);

        horizontalLayout_3->addWidget(correctButtonOther);


        verticalLayout_4->addLayout(horizontalLayout_3);

        stackedWidget->raise();
        giveCahs_group->raise();
        otherSum_groupBox->raise();
        main_label->raise();

        retranslateUi(CashGiveWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CashGiveWindow);
    } // setupUi

    void retranslateUi(QWidget *CashGiveWindow)
    {
        CashGiveWindow->setWindowTitle(QCoreApplication::translate("CashGiveWindow", "Cash", nullptr));
        main_label->setText(QCoreApplication::translate("CashGiveWindow", "\320\222\321\213\320\264\320\260\321\207\320\260 \320\275\320\260\320\273\320\270\321\207\320\275\321\213\321\205", nullptr));
        FiveButton->setText(QCoreApplication::translate("CashGiveWindow", "5", nullptr));
        TenButton->setText(QCoreApplication::translate("CashGiveWindow", "10", nullptr));
        TwentyButton->setText(QCoreApplication::translate("CashGiveWindow", "20", nullptr));
        cancelCashButton->setText(QCoreApplication::translate("CashGiveWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        fiftyButton->setText(QCoreApplication::translate("CashGiveWindow", "50", nullptr));
        oneHundredButton->setText(QCoreApplication::translate("CashGiveWindow", "100", nullptr));
        twoHundredButton->setText(QCoreApplication::translate("CashGiveWindow", "200", nullptr));
        otherSumButton->setText(QCoreApplication::translate("CashGiveWindow", "\320\224\321\200\321\203\320\263\320\260\321\217 \321\201\321\203\320\274\320\274\320\260", nullptr));
        errorStack->setText(QCoreApplication::translate("CashGiveWindow", "<html><head/><body><p>\320\222\321\213\320\264\320\260\321\207\320\260 \320\275\320\260\320\273\320\270\321\207\320\275\321\213\321\205 \320\275\320\265\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\260,</p><p>\320\275\320\265 \321\205\320\262\320\260\321\202\320\260\320\265\321\202 \321\201\321\200\320\265\320\264\321\201\321\202\320\262 \320\270\320\273\320\270 \320\275\320\265\321\202 \320\272\321\203\320\277\321\216\321\200 \320\262 \320\261\320\260\320\275\320\272\320\276\320\274\320\260\321\202\320\265</p></body></html>", nullptr));
        variantCashOne->setText(QCoreApplication::translate("CashGiveWindow", "How much cash", nullptr));
        variantCashTwo->setText(QCoreApplication::translate("CashGiveWindow", "How much cash", nullptr));
        giveCahs_group->setTitle(QCoreApplication::translate("CashGiveWindow", "GroupBox", nullptr));
        label_5->setText(QCoreApplication::translate("CashGiveWindow", "\320\227\320\260\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\275\321\214\320\263\320\270...", nullptr));
        otherSum_groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("CashGiveWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\321\200\321\203\320\263\321\203\321\216 \321\201\321\203\320\274\320\274\321\203", nullptr));
        errorLabel->setText(QCoreApplication::translate("CashGiveWindow", "\320\222\321\213\320\264\320\260\321\207\320\260 \320\275\320\260\320\273\320\270\321\207\320\275\321\213\321\205 \320\275\320\265\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\260, \320\275\320\265 \321\205\320\262\320\260\321\202\320\260\320\265\321\202 \321\201\321\200\320\265\320\264\321\201\321\202\320\262 \n"
"\320\270\320\273\320\270 \321\201\321\203\320\274\320\274\320\260 \320\262\320\262\320\265\320\264\320\265\320\275\320\260 \320\275\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("CashGiveWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\321\203\320\274\320\274\320\260: 5", nullptr));
        label_4->setText(QCoreApplication::translate("CashGiveWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\321\203\320\274\320\274\320\260: 2000", nullptr));
        insertButtonOther->setText(QCoreApplication::translate("CashGiveWindow", "\320\222\320\262\320\276\320\264", nullptr));
        cancelButtonOther->setText(QCoreApplication::translate("CashGiveWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        correctButtonOther->setText(QCoreApplication::translate("CashGiveWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashGiveWindow: public Ui_CashGiveWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHGIVEWINDOW_H
