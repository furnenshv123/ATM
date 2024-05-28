/********************************************************************************
** Form generated from reading UI file 'russian_pin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUSSIAN_PIN_H
#define UI_RUSSIAN_PIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_russian_pin
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *insertButton;
    QLabel *no_pin;
    QLabel *card_blocklabel;
    QGroupBox *wait_group;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;

    void setupUi(QWidget *russian_pin)
    {
        if (russian_pin->objectName().isEmpty())
            russian_pin->setObjectName("russian_pin");
        russian_pin->setEnabled(true);
        russian_pin->resize(775, 454);
        russian_pin->setMinimumSize(QSize(775, 454));
        russian_pin->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        russian_pin->setWindowIcon(icon);
        lineEdit = new QLineEdit(russian_pin);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(280, 190, 231, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(16);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        lineEdit->setMaxLength(4);
        lineEdit->setFrame(true);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setDragEnabled(false);
        lineEdit->setClearButtonEnabled(false);
        label = new QLabel(russian_pin);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -10, 801, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label->setAlignment(Qt::AlignCenter);
        insertButton = new QPushButton(russian_pin);
        insertButton->setObjectName("insertButton");
        insertButton->setEnabled(false);
        insertButton->setGeometry(QRect(570, 360, 181, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font2.setBold(true);
        insertButton->setFont(font2);
        insertButton->setLayoutDirection(Qt::RightToLeft);
        insertButton->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-play-4210629.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon1);
        insertButton->setIconSize(QSize(30, 30));
        no_pin = new QLabel(russian_pin);
        no_pin->setObjectName("no_pin");
        no_pin->setGeometry(QRect(210, 110, 351, 51));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        no_pin->setFont(font3);
        no_pin->setStyleSheet(QString::fromUtf8("color: red;"));
        card_blocklabel = new QLabel(russian_pin);
        card_blocklabel->setObjectName("card_blocklabel");
        card_blocklabel->setGeometry(QRect(140, 250, 511, 81));
        card_blocklabel->setFont(font3);
        card_blocklabel->setStyleSheet(QString::fromUtf8("color:red;"));
        wait_group = new QGroupBox(russian_pin);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(180, -30, 431, 491));
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
        QFont font4;
        font4.setPointSize(16);
        label_2->setFont(font4);

        retranslateUi(russian_pin);

        QMetaObject::connectSlotsByName(russian_pin);
    } // setupUi

    void retranslateUi(QWidget *russian_pin)
    {
        russian_pin->setWindowTitle(QCoreApplication::translate("russian_pin", "Pincode", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("russian_pin", "\320\237\320\270\320\275-\320\272\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("russian_pin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\270\320\275-\320\272\320\276\320\264 \320\272\320\260\321\200\321\202\321\213", nullptr));
        insertButton->setText(QCoreApplication::translate("russian_pin", "\320\222\320\262\320\276\320\264", nullptr));
        no_pin->setText(QCoreApplication::translate("russian_pin", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\277\320\270\320\275-\320\272\320\276\320\264 \320\272\320\260\321\200\321\202\321\213!", nullptr));
        card_blocklabel->setText(QCoreApplication::translate("russian_pin", "\320\232\320\260\321\200\321\202\320\260 \320\267\320\260\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\320\275\320\260. \320\227\320\260\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\260\321\200\321\202\321\203", nullptr));
        wait_group->setTitle(QCoreApplication::translate("russian_pin", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("russian_pin", "\320\237\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class russian_pin: public Ui_russian_pin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUSSIAN_PIN_H
