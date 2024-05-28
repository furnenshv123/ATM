#include "russian_pin.h"
#include "ui_russian_pin.h"

#include <QMouseEvent>
#include <QLineEdit>
#include <QEvent>
#include <QDebug>
int index_for_bd = 0;
int g = 0;
bool language_pin;
russian_pin::russian_pin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::russian_pin)
{
    ui->setupUi(this);

    QPixmap load_pict(":/rec/pictures/hourglass.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView_2->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->wait_group->hide();
    ui->graphicsView_2->setFrameStyle(QFrame::NoFrame);
    ui->no_pin->hide();
    ui->card_blocklabel->hide();
    ui->lineEdit->setValidator(new QIntValidator(0, 1000, this));
    db = QSqlDatabase::addDatabase("QSQLITE", "MyConnect");
    db.setDatabaseName("./information_cards.db");
    if(db.open()){

        qDebug("Open!!!");
    }
    else{
        qDebug("Not open!!!");
    }
    if(ui->lineEdit->text().length() == 4){
        ui->insertButton->setEnabled(true);
    }
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i =0;i < index_for_bd;i++){
        query->next();
    }

}

russian_pin::~russian_pin()
{
    query->finish();
    db.close();
    QSqlDatabase::removeDatabase("MyConnect");
    delete ui;
}

void russian_pin::wait_Timer()
{

    func_window = new russian_function();
    func_window->show();
    close();
    timer_wait->stop();
    connect(this, &russian_pin::signal_for_lang, func_window, &russian_function::slot_for_lang);
    emit signal_for_lang(language_pin);
    connect(func_window, &russian_function::signal_pin, this, &russian_pin::slot_pin_show);

}







void russian_pin::on_insertButton_clicked()
{

    if(query->value(0).toInt() != ui->lineEdit->text().toInt()){
        g++;
        ui->no_pin->show();
        ui->lineEdit->clear();
        if(g == 3){
            ui->label->hide();
            ui->lineEdit->hide();
            ui->insertButton->hide();
            ui->card_blocklabel->show();

        }
    }

    else{
        ui->label->hide();
        ui->lineEdit->hide();
        ui->insertButton->hide();
        ui->no_pin->hide();
        ui->wait_group->show();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);

    }
}


void russian_pin::on_lineEdit_textEdited(const QString &arg1)
{
    ui->no_pin->hide();
    if(arg1.length() == 4){
        ui->insertButton->setEnabled(true);
    }
    else{
        ui->insertButton->setEnabled(false);
    }

}

void russian_pin::slot(int a)
{
    index_for_bd = a;
}



void russian_pin::slot_pin_show()
{
    show();
    ui->label->show();
    ui->lineEdit->show();
    ui->insertButton->show();
    ui->wait_group->hide();
    ui->lineEdit->clear();
}

void russian_pin::slot_language(bool c)
{
    language_pin = c;
    if(language_pin == 1){
        ui->insertButton->setText("Input");
        ui->label->setText("Enter the card PIN code");
        ui->label_2->setText("Wait...");
        ui->no_pin->setText("Incorrect card PIN code");
        ui->card_blocklabel->setText("The card is blocked. Take the card");
        ui->lineEdit->setPlaceholderText("Pin-code");
    }
}




