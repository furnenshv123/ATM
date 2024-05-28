#include "change_lang.h"
#include "ui_change_lang.h"
bool language;
change_lang::change_lang(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_lang)
{
    ui->setupUi(this);
    QPixmap load_pict(":/rec/pictures/hourglass.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView_2->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->graphicsView_2->setFrameStyle(QFrame::NoFrame);
    ui->wait_group->hide();
}

change_lang::~change_lang()
{
    delete ui;
}

void change_lang::on_englishBtn_clicked()
{
    language = 1;
    ui->groupBox->hide();
    ui->wait_group->show();
    ui->label->hide();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);

}

void change_lang::wait_Timer()
{
    rus_pin = new russian_pin();
    rus_pin->show();
    close();
    timer_wait->stop();
    connect(this, &change_lang::signal_language, rus_pin, &russian_pin::slot_language);
    emit signal_language(language);

}


void change_lang::on_russianBtn_clicked()
{
    language = 0;
    ui->groupBox->hide();
    ui->wait_group->show();
    ui->label->hide();
    timer_wait = new QTimer();
    ui->label_2->setText("Подождите...");
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
}

