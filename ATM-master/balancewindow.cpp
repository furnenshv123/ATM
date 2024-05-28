#include "balancewindow.h"
#include "ui_balancewindow.h"
int index_db = 0;
bool balance_lang;
BalanceWindow::BalanceWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BalanceWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE", "MyConnect");
    db.setDatabaseName("./information_cards.db");
    if(db.open()){

        qDebug("Open!!!");
    }
    else{
        qDebug("Not open!!!");
    }
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i =0; i < index_db;i++){
        query->next();
    }
    ui->balanceLabel->setText(QVariant(query->value(2)).toString() + " BYN");
}

BalanceWindow::~BalanceWindow()
{
    delete ui;
}

void BalanceWindow::on_pushButton_clicked()
{
    emit signal_when_ok();
    close();
}

void BalanceWindow::slot_index_db(int a)
{
    index_db = a;
}

void BalanceWindow::slot_balance_language(bool h)
{
    balance_lang = h;
    if(balance_lang == 1){
        ui->label->setText("Amount on the card");
    }
}

