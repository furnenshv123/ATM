/********************************************************************************
** Form generated from reading UI file 'russian_function.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUSSIAN_FUNCTION_H
#define UI_RUSSIAN_FUNCTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_russian_function
{
public:
    QGroupBox *allGroup;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *countinueButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *transfer_button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *balance_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *give_cashButton;
    QLabel *main_label;
    QGroupBox *wait_group;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;

    void setupUi(QWidget *russian_function)
    {
        if (russian_function->objectName().isEmpty())
            russian_function->setObjectName("russian_function");
        russian_function->resize(775, 454);
        russian_function->setMinimumSize(QSize(775, 454));
        russian_function->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        russian_function->setWindowIcon(icon);
        allGroup = new QGroupBox(russian_function);
        allGroup->setObjectName("allGroup");
        allGroup->setGeometry(QRect(-10, -20, 791, 481));
        layoutWidget = new QWidget(allGroup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 120, 761, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        countinueButton = new QPushButton(layoutWidget);
        countinueButton->setObjectName("countinueButton");
        countinueButton->setMinimumSize(QSize(231, 68));
        QFont font;
        font.setBold(true);
        countinueButton->setFont(font);
        countinueButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 12px;\n"
"font-weight: 700;\n"
"margin-left:15px;\n"
"margin-right: 10px;\n"
"border-radius: 10px;"));
        countinueButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(countinueButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        transfer_button = new QPushButton(layoutWidget);
        transfer_button->setObjectName("transfer_button");
        transfer_button->setMinimumSize(QSize(231, 68));
        transfer_button->setFont(font);
        transfer_button->setLayoutDirection(Qt::RightToLeft);
        transfer_button->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 12px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(transfer_button);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        balance_button = new QPushButton(layoutWidget);
        balance_button->setObjectName("balance_button");
        balance_button->setMinimumSize(QSize(231, 68));
        balance_button->setFont(font);
        balance_button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 12px;\n"
"font-weight: 700;\n"
"margin-left:15px;\n"
"margin-right: 10px;\n"
"border-radius: 10px;"));
        balance_button->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(balance_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        give_cashButton = new QPushButton(layoutWidget);
        give_cashButton->setObjectName("give_cashButton");
        give_cashButton->setMinimumSize(QSize(231, 68));
        give_cashButton->setFont(font);
        give_cashButton->setLayoutDirection(Qt::RightToLeft);
        give_cashButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 12px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;"));

        horizontalLayout->addWidget(give_cashButton);


        verticalLayout->addLayout(horizontalLayout);

        main_label = new QLabel(allGroup);
        main_label->setObjectName("main_label");
        main_label->setGeometry(QRect(-2, 9, 791, 81));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        main_label->setFont(font1);
        main_label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        main_label->setAlignment(Qt::AlignCenter);
        wait_group = new QGroupBox(russian_function);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(165, -30, 431, 491));
        wait_group->setMinimumSize(QSize(0, 454));
        wait_group->setAutoFillBackground(false);
        wait_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView_2 = new QGraphicsView(wait_group);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(10, 40, 411, 391));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_2 = new QLabel(wait_group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 440, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);

        retranslateUi(russian_function);

        QMetaObject::connectSlotsByName(russian_function);
    } // setupUi

    void retranslateUi(QWidget *russian_function)
    {
        russian_function->setWindowTitle(QCoreApplication::translate("russian_function", "Functions", nullptr));
        allGroup->setTitle(QCoreApplication::translate("russian_function", "GroupBox", nullptr));
        countinueButton->setText(QCoreApplication::translate("russian_function", "\320\227\320\260\320\261\321\200\320\260\321\202\321\214 \320\272\320\260\321\200\321\202\321\203", nullptr));
        transfer_button->setText(QCoreApplication::translate("russian_function", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \321\201 \320\272\320\260\321\200\321\202\321\213 \320\275\320\260 \320\272\320\260\321\200\321\202\321\203", nullptr));
        balance_button->setText(QCoreApplication::translate("russian_function", "\320\221\320\260\320\273\320\260\320\275\321\201", nullptr));
        give_cashButton->setText(QCoreApplication::translate("russian_function", "\320\222\321\213\320\264\320\260\321\207\320\260 \320\275\320\260\320\273\320\270\321\207\320\275\321\213\321\205", nullptr));
        main_label->setText(QCoreApplication::translate("russian_function", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\321\216", nullptr));
        wait_group->setTitle(QCoreApplication::translate("russian_function", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("russian_function", "\320\237\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class russian_function: public Ui_russian_function {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUSSIAN_FUNCTION_H
