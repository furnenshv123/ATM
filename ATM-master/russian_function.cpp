#include "russian_function.h"
#include "ui_russian_function.h"
bool function_lang;
russian_function::russian_function(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::russian_function)
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

}

russian_function::~russian_function()
{
    delete ui;
}

void russian_function::wait_Timer_transfer()
{
    transfer_window = new TransferWindow();
    transfer_window->show();
    close();
    timer_wait->stop();
    connect(this, &russian_function::signal_language, transfer_window, &TransferWindow::slot_transfer_language);
    emit signal_language(function_lang);
    connect(transfer_window, &TransferWindow::signal_from_transfer, this, &russian_function::wait_Timer_countinue);
}

void russian_function::wait_Timer_balance()
{
    balance_window = new BalanceWindow();
    balance_window->show();
    close();
    timer_wait->stop();
    connect(this, &russian_function::signal_language, balance_window, &BalanceWindow::slot_balance_language);
    emit signal_language(function_lang);
    connect(balance_window, &BalanceWindow::signal_when_ok, this, &russian_function::wait_Timer_countinue);
}

void russian_function::wait_Timer_cash()
{
    cash_window = new CashGiveWindow();
    cash_window->show();
    close();
    timer_wait->stop();
    connect(this, &russian_function::signal_language, cash_window, &CashGiveWindow::slot_cash_language);
    emit signal_language(function_lang);
    connect(cash_window, &CashGiveWindow::signal_for_countinue, this, &russian_function::wait_Timer_countinue);
}

void russian_function::wait_Timer_countinue()
{
    countinue_window = new choiceCountinueWindow();
    countinue_window->show();
    close();
    timer_wait->stop();
    connect(this, &russian_function::signal_language, countinue_window, &choiceCountinueWindow::slot_countinue_lang);
    emit signal_language(function_lang);
    connect(countinue_window, &choiceCountinueWindow::countinue_accept_signal, this, &russian_function::accept_countinue_showSlot);
}

void russian_function::slot_for_lang(bool d)
{
    function_lang = d;
    if(function_lang == 1){
        ui->balance_button->setText("Balance");
        ui->countinueButton->setText("Pick up the card");
        ui->give_cashButton->setText("Cash withdrawal");
        ui->transfer_button->setText("Transfer from card to card");
        ui->label_2->setText("Wait...");
        ui->main_label->setText("Choose operation");
    }
}

void russian_function::on_transfer_button_clicked()
{
    ui->allGroup->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    timer_wait->start(3000);


    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer_transfer()));
}





void russian_function::on_balance_button_clicked()
{
    ui->allGroup->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    timer_wait->start(3000);

    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer_balance()));
}


void russian_function::on_give_cashButton_clicked()
{
    ui->allGroup->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    timer_wait->start(3000);

    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer_cash()));
}


void russian_function::on_countinueButton_clicked()
{
    ui->allGroup->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    timer_wait->start(3000);
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer_countinue()));
}

void russian_function::accept_countinue_showSlot()
{
    emit signal_pin();
}

