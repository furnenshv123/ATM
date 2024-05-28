/********************************************************************************
** Form generated from reading UI file 'change_lang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_LANG_H
#define UI_CHANGE_LANG_H

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

class Ui_change_lang
{
public:
    QGroupBox *wait_group;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *russianBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *englishBtn;
    QLabel *label;

    void setupUi(QWidget *change_lang)
    {
        if (change_lang->objectName().isEmpty())
            change_lang->setObjectName("change_lang");
        change_lang->resize(775, 454);
        change_lang->setMinimumSize(QSize(775, 454));
        change_lang->setMaximumSize(QSize(775, 454));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/pictures/free-icon-atm-5346812.png"), QSize(), QIcon::Normal, QIcon::Off);
        change_lang->setWindowIcon(icon);
        wait_group = new QGroupBox(change_lang);
        wait_group->setObjectName("wait_group");
        wait_group->setGeometry(QRect(180, -20, 431, 491));
        wait_group->setMinimumSize(QSize(0, 454));
        wait_group->setAutoFillBackground(false);
        wait_group->setStyleSheet(QString::fromUtf8("border:none;"));
        graphicsView_2 = new QGraphicsView(wait_group);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(10, 40, 411, 391));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background: transparent"));
        label_2 = new QLabel(wait_group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 440, 151, 31));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(change_lang);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 70, 771, 161));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("border:none;"));
        groupBox->setFlat(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 761, 73));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        russianBtn = new QPushButton(layoutWidget);
        russianBtn->setObjectName("russianBtn");
        russianBtn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(russianBtn->sizePolicy().hasHeightForWidth());
        russianBtn->setSizePolicy(sizePolicy);
        russianBtn->setMinimumSize(QSize(221, 71));
        russianBtn->setAutoFillBackground(false);
        russianBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:15px;\n"
"margin-right: 10px;\n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/pictures/free-icon-play-4210629.png"), QSize(), QIcon::Normal, QIcon::Off);
        russianBtn->setIcon(icon1);
        russianBtn->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(russianBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        englishBtn = new QPushButton(layoutWidget);
        englishBtn->setObjectName("englishBtn");
        englishBtn->setMinimumSize(QSize(221, 71));
        englishBtn->setLayoutDirection(Qt::RightToLeft);
        englishBtn->setAutoFillBackground(false);
        englishBtn->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(0, 91, 0, 255), stop:1 rgba(211, 211, 211, 255));\n"
"color: #006400;\n"
"font-size: 22px;\n"
"font-weight: 700;\n"
"margin-left:10px;\n"
"margin-right: 15px;\n"
"border-radius: 10px;\n"
"\n"
"\n"
""));
        englishBtn->setIcon(icon1);
        englishBtn->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(englishBtn);

        label = new QLabel(change_lang);
        label->setObjectName("label");
        label->setGeometry(QRect(-11, 0, 791, 91));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:#006400;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(change_lang);

        russianBtn->setDefault(false);
        englishBtn->setDefault(false);


        QMetaObject::connectSlotsByName(change_lang);
    } // setupUi

    void retranslateUi(QWidget *change_lang)
    {
        change_lang->setWindowTitle(QCoreApplication::translate("change_lang", "choice language", nullptr));
        wait_group->setTitle(QCoreApplication::translate("change_lang", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("change_lang", "Wait...", nullptr));
        groupBox->setTitle(QString());
        russianBtn->setText(QCoreApplication::translate("change_lang", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        englishBtn->setText(QCoreApplication::translate("change_lang", "English", nullptr));
        label->setText(QCoreApplication::translate("change_lang", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\217\320\267\321\213\320\272 \n"
"Choose language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_lang: public Ui_change_lang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_LANG_H
