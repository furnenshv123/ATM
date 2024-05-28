#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTimer>

#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap cart_pixmap(":/rec/pictures/free-icon-atm-card-security-11815914.png");
    QPixmap load_pict(":/rec/pictures/hourglass.png");

    QSize PicSize(250,250);
    QSize PicLoadSize(250, 250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    cart_pixmap = cart_pixmap.scaled(PicLoadSize, Qt::KeepAspectRatio);

    card_scene = new QGraphicsScene(0,0,250,250, this);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView->setScene(scene);
    ui->cardView->setScene(card_scene);
    card_scene->addPixmap(cart_pixmap);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->wait_group->hide();
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->cardView->setFrameStyle(QFrame::NoFrame);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int index_of_card;
// нажатие на кнопку


//void MainWindow::keyPressEvent(QKeyEvent *e)
//{
//    if(e->key() == Qt::Key_R){
//    ui->group_start->hide();
//    ui->wait_group->show();
//    timer_wait = new QTimer();
//    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
//    timer_wait->start(3000);
//    }

//}


void MainWindow::on_pushButton_4_clicked()
{
    index_of_card = 4;
    ui->group_start->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    rus_pincode = new russian_pin();
    balance_window = new BalanceWindow();
    transfer_window = new TransferWindow();
    cash_window = new CashGiveWindow();
    check_window = new CheckPrint();
    connect(this, &MainWindow::signal, rus_pincode, &russian_pin::slot);
    connect(this, &MainWindow::signal, balance_window, &BalanceWindow::slot_index_db);
    connect(this, &MainWindow::signal, transfer_window, &TransferWindow::slot_for_db);
    connect(this, &MainWindow::signal, cash_window, &CashGiveWindow::slot_index_for_dsb);
    connect(this, &MainWindow::signal, check_window, &CheckPrint::index_card_check);
    emit signal(index_of_card);
    delete cash_window;
    delete check_window;
    delete transfer_window;
    delete balance_window;
    delete rus_pincode;
}

void MainWindow::wait_Timer()
{
    window = new change_lang();
    window->show();
    close();
    timer_wait->stop();
}


void MainWindow::on_pushButton_clicked()
{
    index_of_card = 1;
    ui->group_start->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    rus_pincode = new russian_pin();
    balance_window = new BalanceWindow();
    transfer_window = new TransferWindow();
    cash_window = new CashGiveWindow();
    check_window = new CheckPrint();
    connect(this, &MainWindow::signal, rus_pincode, &russian_pin::slot);
    connect(this, &MainWindow::signal, balance_window, &BalanceWindow::slot_index_db);
    connect(this, &MainWindow::signal, transfer_window, &TransferWindow::slot_for_db);
    connect(this, &MainWindow::signal, cash_window, &CashGiveWindow::slot_index_for_dsb);
    connect(this, &MainWindow::signal, check_window, &CheckPrint::index_card_check);
    emit signal(index_of_card);
    delete check_window;
    delete cash_window;
    delete transfer_window;
    delete balance_window;
    delete rus_pincode;
}


void MainWindow::on_pushButton_2_clicked()
{
    index_of_card = 2;
    ui->group_start->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    rus_pincode = new russian_pin();
    balance_window = new BalanceWindow();
    transfer_window = new TransferWindow();
    cash_window = new CashGiveWindow();
    check_window = new CheckPrint();
    connect(this, &MainWindow::signal, rus_pincode, &russian_pin::slot);
    connect(this, &MainWindow::signal, balance_window, &BalanceWindow::slot_index_db);
    connect(this, &MainWindow::signal, transfer_window, &TransferWindow::slot_for_db);
    connect(this, &MainWindow::signal, cash_window, &CashGiveWindow::slot_index_for_dsb);
    connect(this, &MainWindow::signal, check_window, &CheckPrint::index_card_check);
    emit signal(index_of_card);
    delete cash_window;
    delete check_window;
    delete transfer_window;
    delete balance_window;
    delete rus_pincode;
}


void MainWindow::on_pushButton_3_clicked()
{
    index_of_card = 3;
    ui->group_start->hide();
    ui->wait_group->show();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    rus_pincode = new russian_pin();
    balance_window = new BalanceWindow();
    transfer_window = new TransferWindow();
    cash_window = new CashGiveWindow();
    check_window = new CheckPrint();
    connect(this, &MainWindow::signal, rus_pincode, &russian_pin::slot);
    connect(this, &MainWindow::signal, balance_window, &BalanceWindow::slot_index_db);
    connect(this, &MainWindow::signal, transfer_window, &TransferWindow::slot_for_db);
    connect(this, &MainWindow::signal, cash_window, &CashGiveWindow::slot_index_for_dsb);
    connect(this, &MainWindow::signal, check_window, &CheckPrint::index_card_check);
    emit signal(index_of_card);
    delete cash_window;
    delete check_window;
    delete transfer_window;
    delete balance_window;
    delete rus_pincode;
}

