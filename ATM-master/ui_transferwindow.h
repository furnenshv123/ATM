/********************************************************************************
** Form generated from reading UI file 'transferwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERWINDOW_H
#define UI_TRANSFERWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferWindow
{
public:
    QLabel *label;
    QGroupBox *sum_group;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *correctButton;
    QLabel *label_3;
    QLineEdit *sumLineEdit;
    QLabel *minSumLabel;
    QGroupBox *cardNumber_group;
    QLineEdit *cardNumber;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *insertCardButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelCardButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *corrcetCardButton;
    QGroupBox *wait_group;
    QGraphicsView *graphicsView;
    QLabel *label_4;
    QLabel *noMoney_forSend;
    QLabel *enterCorectLabel;

    void setupUi(QWidget *TransferWindow)
    {
        if (TransferWindow->objectName().isEmpty())
            TransferWindow->setObjectName("TransferWindow");
        TransferWindow->resize(775, 454);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TransferWindow->sizePolicy().hasHeightForWidth());
        TransferWindow->setSizePolicy(sizePolicy);
        TransferWindow->setMinimumSize(QSize(775, 454));
        TransferWindow->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        TransferWindow->setWindowIcon(icon);
        label = new QLabel(TransferWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -5, 800, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label->setAlignment(Qt::AlignCenter);
        sum_group = new QGroupBox(TransferWindow);
        sum_group->setObjectName("sum_group");
        sum_group->setGeometry(QRect(10, 50, 771, 291));
        sum_group->setStyleSheet(QString::fromUtf8("border:none;"));
        layoutWidget = new QWidget(sum_group);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 150, 731, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        insertButton = new QPushButton(layoutWidget);
        insertButton->setObjectName("insertButton");
        insertButton->setMinimumSize(QSize(171, 41));
        insertButton->setLayoutDirection(Qt::RightToLeft);
        insertButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-play-4210629.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon1);

        horizontalLayout->addWidget(insertButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMinimumSize(QSize(171, 41));
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left: 30px;\n"
"border-radius: 10px;"));
        cancelButton->setIcon(icon1);

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        correctButton = new QPushButton(layoutWidget);
        correctButton->setObjectName("correctButton");
        correctButton->setMinimumSize(QSize(171, 41));
        correctButton->setLayoutDirection(Qt::RightToLeft);
        correctButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #FFD700;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        correctButton->setIcon(icon1);

        horizontalLayout_2->addWidget(correctButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(sum_group);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 20, 331, 51));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        sumLineEdit = new QLineEdit(sum_group);
        sumLineEdit->setObjectName("sumLineEdit");
        sumLineEdit->setGeometry(QRect(200, 90, 361, 31));
        sumLineEdit->setMinimumSize(QSize(361, 31));
        sumLineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        minSumLabel = new QLabel(sum_group);
        minSumLabel->setObjectName("minSumLabel");
        minSumLabel->setGeometry(QRect(80, 150, 261, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        minSumLabel->setFont(font1);
        minSumLabel->setStyleSheet(QString::fromUtf8("color:black;"));
        cardNumber_group = new QGroupBox(TransferWindow);
        cardNumber_group->setObjectName("cardNumber_group");
        cardNumber_group->setGeometry(QRect(10, 50, 781, 231));
        cardNumber_group->setStyleSheet(QString::fromUtf8("border:none;"));
        cardNumber = new QLineEdit(cardNumber_group);
        cardNumber->setObjectName("cardNumber");
        cardNumber->setGeometry(QRect(210, 100, 361, 31));
        cardNumber->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        cardNumber->setMaxLength(16);
        label_2 = new QLabel(cardNumber_group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 761, 71));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(cardNumber_group);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 130, 741, 94));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        insertCardButton = new QPushButton(layoutWidget1);
        insertCardButton->setObjectName("insertCardButton");
        insertCardButton->setMinimumSize(QSize(171, 41));
        insertCardButton->setLayoutDirection(Qt::RightToLeft);
        insertCardButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        insertCardButton->setIcon(icon1);

        horizontalLayout_4->addWidget(insertCardButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cancelCardButton = new QPushButton(layoutWidget1);
        cancelCardButton->setObjectName("cancelCardButton");
        cancelCardButton->setMinimumSize(QSize(171, 41));
        cancelCardButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #800000;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left: 30px;\n"
"border-radius: 10px;"));
        cancelCardButton->setIcon(icon1);

        horizontalLayout_3->addWidget(cancelCardButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        corrcetCardButton = new QPushButton(layoutWidget1);
        corrcetCardButton->setObjectName("corrcetCardButton");
        corrcetCardButton->setMinimumSize(QSize(171, 41));
        corrcetCardButton->setLayoutDirection(Qt::RightToLeft);
        corrcetCardButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #FFD700;\n"
"font-size: 17px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));
        corrcetCardButton->setIcon(icon1);

        horizontalLayout_3->addWidget(corrcetCardButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        wait_group = new QGroupBox(TransferWindow);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(165, -30, 431, 491));
        wait_group->setMinimumSize(QSize(0, 454));
        wait_group->setAutoFillBackground(false);
        wait_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView = new QGraphicsView(wait_group);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 40, 411, 391));
        graphicsView->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_4 = new QLabel(wait_group);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 440, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        label_4->setFont(font2);
        noMoney_forSend = new QLabel(TransferWindow);
        noMoney_forSend->setObjectName("noMoney_forSend");
        noMoney_forSend->setGeometry(QRect(20, 360, 741, 71));
        noMoney_forSend->setFont(font1);
        noMoney_forSend->setStyleSheet(QString::fromUtf8("color:red;"));
        noMoney_forSend->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        enterCorectLabel = new QLabel(TransferWindow);
        enterCorectLabel->setObjectName("enterCorectLabel");
        enterCorectLabel->setGeometry(QRect(20, 340, 281, 21));
        enterCorectLabel->setFont(font1);
        enterCorectLabel->setStyleSheet(QString::fromUtf8("color:red;"));

        retranslateUi(TransferWindow);

        QMetaObject::connectSlotsByName(TransferWindow);
    } // setupUi

    void retranslateUi(QWidget *TransferWindow)
    {
        TransferWindow->setWindowTitle(QCoreApplication::translate("TransferWindow", "Transfer", nullptr));
        label->setText(QCoreApplication::translate("TransferWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \321\201\321\202\321\200\320\265\320\264\321\201\321\202\320\262", nullptr));
        sum_group->setTitle(QString());
        insertButton->setText(QCoreApplication::translate("TransferWindow", "\320\222\320\262\320\276\320\264", nullptr));
        cancelButton->setText(QCoreApplication::translate("TransferWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        correctButton->setText(QCoreApplication::translate("TransferWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("TransferWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\203\320\274\320\274\321\203 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260", nullptr));
        sumLineEdit->setPlaceholderText(QCoreApplication::translate("TransferWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        minSumLabel->setText(QCoreApplication::translate("TransferWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\321\203\320\274\320\274\320\260: 3", nullptr));
        cardNumber_group->setTitle(QString());
        cardNumber->setPlaceholderText(QCoreApplication::translate("TransferWindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("TransferWindow", " \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\320\276\321\207\320\272\320\270 \n"
" \320\277\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\217 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260", nullptr));
#if QT_CONFIG(accessibility)
        insertCardButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        insertCardButton->setText(QCoreApplication::translate("TransferWindow", "\320\222\320\262\320\276\320\264", nullptr));
        cancelCardButton->setText(QCoreApplication::translate("TransferWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        corrcetCardButton->setText(QCoreApplication::translate("TransferWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        wait_group->setTitle(QCoreApplication::translate("TransferWindow", "GroupBox", nullptr));
        label_4->setText(QCoreApplication::translate("TransferWindow", "\320\237\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265...", nullptr));
        noMoney_forSend->setText(QCoreApplication::translate("TransferWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \320\275\320\265\320\273\321\214\320\267\321\217 \320\276\321\201\321\203\321\211\320\265\321\201\321\202\320\262\320\270\321\202\321\214, \320\277\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\261\320\260\320\273\320\260\320\275\321\201 \320\275\320\260 \320\272\320\260\321\200\321\202\320\265\n"
"\320\270\320\273\320\270 \320\266\320\265 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\203\321\216 \321\201\321\203\320\274\320\274\321\203", nullptr));
        enterCorectLabel->setText(QCoreApplication::translate("TransferWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransferWindow: public Ui_TransferWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERWINDOW_H
