#include "choicecountinuewindow.h"
#include "ui_choicecountinuewindow.h"
bool lang_countinue;
choiceCountinueWindow::choiceCountinueWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choiceCountinueWindow)
{
    ui->setupUi(this);
    QPixmap load_pict(":/rec/pictures/free-icon-atm-940930.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView_2->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->giveCard_group->hide();
    ui->choiceMarkGroup->hide();
}

choiceCountinueWindow::~choiceCountinueWindow()
{
    delete ui;
}




void choiceCountinueWindow::on_noButton_clicked()
{

    ui->noButton->hide();
    ui->yesButton->hide();
    if(lang_countinue == 1){
        ui->label->setText("Performance evaluation");
    }else{
        ui->label->setText("Оценка работы");
    }
    ui->choiceMarkGroup->show();
}


void choiceCountinueWindow::on_yesButton_clicked()
{
    close();
    emit countinue_accept_signal();
}

void choiceCountinueWindow::slot_countinue_lang(bool f)
{
    lang_countinue = f;
    if(lang_countinue == 1){
        ui->noButton->setText("No");
        ui->yesButton->setText("Yes");
        ui->label->setText("Would you like to continue?");
        ui->label_2->setText("Take your card");
    }
}




void choiceCountinueWindow::on_badSmile_clicked()
{
    ui->choiceMarkGroup->hide();
    ui->giveCard_group->show();
    ui->label->hide();
}


void choiceCountinueWindow::on_midSmile_clicked()
{
    ui->choiceMarkGroup->hide();
    ui->giveCard_group->show();
    ui->label->hide();
}


void choiceCountinueWindow::on_goodSmile_clicked()
{
    ui->choiceMarkGroup->hide();
    ui->giveCard_group->show();
    ui->label->hide();
}

