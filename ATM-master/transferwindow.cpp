#include "transferwindow.h"
#include "ui_transferwindow.h"
#include <QDebug>
#include <QDoubleValidator>
int index_for_db = 0;
bool transfer_language;
TransferWindow::TransferWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransferWindow)
{
    ui->setupUi(this);
    check_window = new CheckPrint();
    db = QSqlDatabase::addDatabase("QSQLITE", "MyConnect");
    db.setDatabaseName("./information_cards.db");
    if(db.open()){

        qDebug("Open!!!");
    }
    else{
        qDebug("Not open!!!");
    }
    QPixmap load_pict(":/rec/pictures/hourglass.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->wait_group->hide();
    ui->sum_group->hide();
    ui->noMoney_forSend->hide();
    ui->enterCorectLabel->hide();
    ui->cardNumber->setValidator(new QRegularExpressionValidator( QRegularExpression("[0-9]{16,16}")));

}
QString CardNumber = "";

TransferWindow::~TransferWindow()
{
    delete ui;
}

void TransferWindow::wait_Timer()
{
    close();
    check_window->show();
    connect(this, &TransferWindow::signal_forCheck, check_window, &CheckPrint::slot_from_transfer);
    emit signal_forCheck();
    connect(this, &TransferWindow::signal_forChangeLang, check_window, &CheckPrint::slot_changeLanguage);
    emit signal_forChangeLang(transfer_language);
    timer_wait->stop();
}










void TransferWindow::on_insertButton_clicked()
{
    float balanceSend, newBalanceSend;
    float moneySend = ui->sumLineEdit->text().toFloat();;
    float balanceReceiver;
    connect(this, &TransferWindow::signal_sumForReceive, check_window, &CheckPrint::slot_moneyFromTransfer);
    emit signal_sumForReceive(moneySend);
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i =0;i < index_for_db;i++){
        query->next();
    }
    balanceSend = query->value(2).toFloat();
    newBalanceSend = balanceSend - moneySend;
    if(newBalanceSend < 0 || moneySend < 2.60 || moneySend > 3000.0){
        ui->noMoney_forSend->show();
        ui->sumLineEdit->clear();
    } else{
        query->exec();
        query->prepare("UPDATE Cards SET Balance=ROUND(:balance, 2) WHERE Balance=:old_balance");
        query->bindValue(":balance", newBalanceSend);
        query->bindValue(":old_balance", balanceSend);
        query->exec();
        query->prepare("SELECT * FROM Cards WHERE CardNumber=:value");
        query->bindValue(":value", CardNumber);
        if (query->exec()) {
            while (query->next()) {

                balanceReceiver = query->value(2).toFloat();

            }
        }
        query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE CardNumber=:number");
        query->bindValue(":balance", balanceReceiver + moneySend);
        query->bindValue(":number", CardNumber);
        query->exec();
        ui->wait_group->show();
        ui->sum_group->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
    }
}



void TransferWindow::on_correctButton_clicked()
{
    ui->sumLineEdit->backspace();
}


void TransferWindow::on_insertCardButton_clicked()
{
    CardNumber = ui->cardNumber->text();
    if(CardNumber.length() < 16){
        ui->enterCorectLabel->show();
        ui->cardNumber->clear();
    }else{
    ui->cardNumber_group->hide();
    ui->sum_group->show();
    connect(check_window, &CheckPrint::signal_countinue_window, this, &TransferWindow::slot_for_countinue);
    connect(this, &TransferWindow::signal_numberReceiver, check_window, &CheckPrint::slot_receiverNumber);
    emit signal_numberReceiver(CardNumber);
    }
}

void TransferWindow::slot_for_db(int a)
{
    index_for_db = a;
}

void TransferWindow::slot_transfer_language(bool t)
{
    transfer_language = t;
    if(transfer_language == 1){
        ui->cancelButton->setText("Cancel");
        ui->cancelCardButton->setText("Cancel");
        ui->corrcetCardButton->setText("Correct");
        ui->correctButton->setText("Correct");
        ui->insertCardButton->setText("Input");
        ui->insertButton->setText("Input");
        ui->cardNumber->setPlaceholderText("Card number");
        ui->sumLineEdit->setPlaceholderText("Amount");
        ui->noMoney_forSend->setText("The transfer cannot be made, check the balance on the card\nor enter the correct amount");
        ui->label_2->setText("Enter the card number of the transfer recipient");
        ui->label->setText("Money transaction");
        ui->label_3->setText("Enter the transfer amount");
        ui->label_4->setText("Wait...");
        ui->enterCorectLabel->setText("Enter the correct card number!");
        ui->minSumLabel->setText("Minimum amount: 3");
    }
}

void TransferWindow::slot_for_countinue()
{
    emit signal_from_transfer();
}


void TransferWindow::on_sumLineEdit_textEdited(const QString &arg1)
{
    ui->noMoney_forSend->hide();
}


void TransferWindow::on_corrcetCardButton_clicked()
{
    ui->cardNumber->backspace();
}


void TransferWindow::on_cancelButton_clicked()
{
    ui->cardNumber_group->show();
    ui->sum_group->hide();
}


void TransferWindow::on_cancelCardButton_clicked()
{
    ui->wait_group->show();
    ui->cardNumber_group->hide();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_TimerCancel()));
    timer_wait->start(3000);
}

void TransferWindow::wait_TimerCancel()
{
    close();
    emit signal_from_transfer();
    timer_wait->stop();
}


void TransferWindow::on_cardNumber_textEdited(const QString &arg1)
{
    ui->enterCorectLabel->hide();
}

