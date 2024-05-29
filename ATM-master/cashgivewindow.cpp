#include "cashgivewindow.h"
#include "ui_cashgivewindow.h"
int index_db_cash = 0;
bool cash_language;
QString strVariantOne;
QString strVariantTwo;
CashGiveWindow::CashGiveWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CashGiveWindow)
{

    ui->setupUi(this);
    check_window = new CheckPrint();
    QPixmap load_pict(":/rec/pictures/free-icon-atm-3742459.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->graphicsView->setFrameStyle(QFrame::NoFrame);
    ui->otherSum_groupBox->hide();
    ui->giveCahs_group->hide();
    db = QSqlDatabase::addDatabase("QSQLITE", "MyConnect");
    db.setDatabaseName("./information_cards.db");
    if(db.open()){

        qDebug("Open!!!");
    }
    else{
        qDebug("Not open!!!");
    }
    ui->stackedWidget->setCurrentIndex(0);
    ui->otherLineEdit->setValidator( new QIntValidator(0, 3000, this));
    ui->errorLabel->hide();
    ui->errorStack->hide();
}

CashGiveWindow::~CashGiveWindow()
{

    delete ui;
}

void CashGiveWindow::on_FiveButton_clicked()
{
    float balanceGive;
    float newBalanceGive;
    int countOfBanknotes;
    int newCountOfBanknotes;
    ui->errorStack->hide();
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 5.0;
    query->exec("SELECT * FROM Banknotes");
    query->next();
    countOfBanknotes = query->value(1).toInt();
    newCountOfBanknotes = countOfBanknotes - 1;
    query->exec();
    if(newBalanceGive < 0 || newCountOfBanknotes < 0){
        ui->errorStack->show();
        ui->FiveButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 17px;font-weight: 700;border-radius: 10px;");
    }else{
    query->exec();
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();


    query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:den;");
    query->bindValue(":count", newCountOfBanknotes);
    query->bindValue(":den", 5.0);
    query->exec();
    ui->stackedWidget->hide();
    ui->giveCahs_group->show();
    ui->main_label->hide();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(5.0);

    }
}

void CashGiveWindow::wait_Timer()
{

    check_window->show();
    close();
    timer_wait->stop();
    connect(check_window, &CheckPrint::signal_countinue_window, this, &CashGiveWindow::slot_checkprint_to_countinue);
    connect(this, &CashGiveWindow::signal_from_giveCash, check_window, &CheckPrint::slot_from_giveCash);
    emit signal_from_giveCash();
    connect(this, &CashGiveWindow::signal_forLang, check_window, &CheckPrint::slot_changeLanguage);
    emit signal_forLang(cash_language);
}

void CashGiveWindow::slot_index_for_dsb(int index)
{
    index_db_cash = index;
}

void CashGiveWindow::slot_cash_language(bool k)
{
    cash_language = k;
    if(cash_language == 1){
        ui->cancelCashButton->setText("Cancel");
        ui->cancelButtonOther->setText("Cancel");
        ui->correctButtonOther->setText("Correct");
        ui->insertButtonOther->setText("Input");
        ui->main_label->setText("Cash withdrawal");
        ui->otherLineEdit->setPlaceholderText("Amount");
        ui->label_2->setText("Enter another amount");
        ui->label_3->setText("Minimum amount: 5");
        ui->label_4->setText("Maximum amount: 2000");
        ui->label_5->setText("Take money...");
        ui->otherSumButton->setText("Other amount");
        ui->errorStack->setText("Cash withdrawal is not possible, \nthere are not enough funds or there are no bills in the ATM");
        ui->errorLabel->setText("Cash withdrawal is impossible, \nthere are not enough funds or the amount was entered incorrectly");
    }
}

void CashGiveWindow::slot_checkprint_to_countinue()
{
    emit signal_for_countinue();
}




void CashGiveWindow::on_TenButton_clicked()
{
    int countOfFive;
    int countOfTen;
    float balanceGive;
    float newBalanceGive;
    strVariantOne = "5*2";
    strVariantTwo = "10*1";
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 10.0;
    query->exec();
    query->exec("SELECT * FROM Banknotes;");
    query->next();
    countOfFive = query->value(1).toInt();
    query->next();
    countOfTen = query->value(1).toInt();
    if(newBalanceGive < 0 || (countOfFive - 2 < 0 && countOfTen - 1 < 0)){
        ui->errorStack->show();
        ui->TenButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 17px;font-weight: 700;border-radius: 10px;");
    }else{
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();
    ui->stackedWidget->setCurrentIndex(1);
    ui->variantCashOne->setText(strVariantOne);
    ui->variantCashTwo->setText(strVariantTwo);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(10.0);
    }
}


void CashGiveWindow::on_TwentyButton_clicked()
{
    int countOfTwenty;
    int countOfTen;
    float balanceGive;
    float newBalanceGive;
    strVariantOne = "10*2";
    strVariantTwo = "20*1";
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 20.0;
    query->exec();
    query->exec("SELECT * FROM Banknotes;");
    query->next();
    query->next();
    countOfTen = query->value(1).toInt();
    query->next();
    countOfTwenty = query->value(1).toInt();
    if(newBalanceGive < 0 || (countOfTwenty - 1 < 0 && countOfTen - 2 < 0)){
        ui->errorStack->show();
        ui->TwentyButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 17px;font-weight: 700;border-radius: 10px;");
    }else{
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();
    ui->stackedWidget->setCurrentIndex(1);
    ui->variantCashOne->setText(strVariantOne);
    ui->variantCashTwo->setText(strVariantTwo);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(20.0);
    }
}


void CashGiveWindow::on_fiftyButton_clicked()
{
    int countOfFive;
    int countOfTen;
    int countOfTwenty;
    float balanceGive;
    float newBalanceGive;
    strVariantOne = "5*10";
    strVariantTwo = "20*2, 10*1";
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 50.0;
    query->exec();
    query->exec("SELECT * FROM Banknotes;");
    query->next();
    countOfFive = query->value(1).toInt();
    query->next();
    countOfTen = query->value(1).toInt();
    query->next();
    countOfTwenty = query->value(1).toInt();
    if(newBalanceGive < 0 || (countOfFive - 10 < 0 && (countOfTwenty - 2 < 0 || countOfTen - 1 < 0))){
        ui->errorStack->show();
        ui->fiftyButton->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 22px;font-weight: 700;margin-left:10px;border-radius: 10px;");
    }else{
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();
    ui->stackedWidget->setCurrentIndex(1);
    ui->variantCashOne->setText(strVariantOne);
    ui->variantCashTwo->setText(strVariantTwo);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(50.0);
    }
}


void CashGiveWindow::on_oneHundredButton_clicked()
{
    int countOfFifty;
    int countOfOneHundred;
    float balanceGive;
    float newBalanceGive;
    strVariantOne = "50*2";
    strVariantTwo = "100*1";
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 100.0;
    query->exec();
    query->exec("SELECT * FROM Banknotes;");
    query->next();
    query->next();
    query->next();
    query->next();
    countOfFifty = query->value(1).toInt();
    query->next();
    countOfOneHundred = query->value(1).toInt();
    if(newBalanceGive < 0 || (countOfFifty - 2 < 0 && countOfOneHundred - 1 < 0)){
        ui->oneHundredButton->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 22px;font-weight: 700;margin-left:10px;border-radius: 10px;");
        ui->errorStack->show();
    }else{
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();
    ui->stackedWidget->setCurrentIndex(1);
    ui->variantCashOne->setText(strVariantOne);
    ui->variantCashTwo->setText(strVariantTwo);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(100.0);
    }
}


void CashGiveWindow::on_twoHundredButton_clicked()
{
    int countOfFifty;
    int countOfTwoHundred;
    float balanceGive;
    float newBalanceGive;
    strVariantOne = "50*4";
    strVariantTwo = "200*1";
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i= 0 ;i < index_db_cash;i++){
        query->next();
    }
    balanceGive = query->value(2).toFloat();
    newBalanceGive = balanceGive - 200.0;
    query->exec();
    query->exec("SELECT * FROM Banknotes;");
    query->next();
    query->next();
    query->next();
    query->next();
    countOfFifty = query->value(1).toInt();
    query->next();
    query->next();
    countOfTwoHundred = query->value(1).toInt();
    if(newBalanceGive < 0 || (countOfFifty - 4 < 0 && countOfTwoHundred - 1 < 0)){
        ui->twoHundredButton->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.921631, y1:1, x2:0.917, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400;font-size: 22px;font-weight: 700;margin-left:10px;border-radius: 10px;");
        ui->errorStack->show();
    }else{
    query->prepare("UPDATE Cards SET Balance=ROUND(:balance,2) WHERE Balance=:old_balance;");
    query->bindValue(":balance", newBalanceGive);
    query->bindValue(":old_balance", balanceGive);
    query->exec();
    ui->stackedWidget->setCurrentIndex(1);
    ui->variantCashOne->setText(strVariantOne);
    ui->variantCashTwo->setText(strVariantTwo);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(200.0);
    }
}


void CashGiveWindow::on_cancelCashButton_clicked()
{
    close();
    emit signal_for_countinue();
}


void CashGiveWindow::on_variantCashOne_clicked()
{
    int countBanknotes, newCountBanknotes;

    if(strVariantOne == "5*2"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 2;
        if(newCountBanknotes < 0){
            ui->variantCashOne->setEnabled(false);
            ui->variantCashOne->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 5.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantOne == "10*2"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();

        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 2;
        if(newCountBanknotes < 0){
        ui->variantCashOne->setEnabled(false);
        ui->variantCashOne->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }
        else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 10.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantOne == "5*10"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();

        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 10;
        if(newCountBanknotes < 0){
        ui->variantCashOne->setEnabled(false);
        ui->variantCashOne->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 5.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantOne == "50*2"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        query->next();

        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 2;
        if(newCountBanknotes < 0){
        ui->variantCashOne->setEnabled(false);
        ui->variantCashOne->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 50.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantOne == "50*4"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        query->next();

        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 4;
        if(newCountBanknotes < 0){
        ui->variantCashOne->setEnabled(false);
        ui->variantCashOne->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 50.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }

}


void CashGiveWindow::on_variantCashTwo_clicked()
{
    int countBanknotes, newCountBanknotes;

    if(strVariantTwo == "10*1"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 1;
        if(newCountBanknotes < 0){
        ui->variantCashTwo->setEnabled(false);
        ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 10.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantTwo == "20*1"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 1;
        if(newCountBanknotes < 0){
        ui->variantCashTwo->setEnabled(false);
        ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 20.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantTwo == "20*2, 10*1"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 2;
        if(newCountBanknotes < 0){
        ui->variantCashTwo->setEnabled(false);
        ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 20.0);
        query->exec();
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 1;
        if(newCountBanknotes < 0){
            ui->variantCashTwo->setEnabled(false);
            ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 10.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
        }
    }else if(strVariantTwo == "100*1"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 1;
        if(newCountBanknotes < 0){
        ui->variantCashTwo->setEnabled(false);
        ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 100.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }else if(strVariantTwo == "200*1"){
        query->exec("SELECT * FROM Banknotes;");
        query->next();
        query->next();
        query->next();
        query->next();
        query->next();
        query->next();
        countBanknotes = query->value(1).toInt();
        query->exec();
        newCountBanknotes = countBanknotes - 1;
        if(newCountBanknotes < 0){
        ui->variantCashTwo->setEnabled(false);
        ui->variantCashTwo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122749, y1:1, x2:0.129, y2:1, stop:0 rgba(255, 17, 0, 255), stop:1 rgba(211, 211, 211, 255));color: #006400; font-size: 22px; font-weight: 700; margin-left:15px; margin-right: 10px; border-radius: 10px;");
        }else{
        query->prepare("UPDATE Banknotes SET Count=:count WHERE Denomination=:abc;");
        query->bindValue(":count", newCountBanknotes);
        query->bindValue(":abc", 200.0);
        query->exec();
        ui->stackedWidget->hide();
        ui->giveCahs_group->show();
        ui->main_label->hide();
        timer_wait = new QTimer();
        connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
        timer_wait->start(3000);
        }
    }
}


void CashGiveWindow::on_otherSumButton_clicked()
{
    ui->stackedWidget->hide();
    ui->otherSum_groupBox->show();

}


void CashGiveWindow::on_correctButtonOther_clicked()
{
    ui->otherLineEdit->backspace();
}


void CashGiveWindow::on_cancelButtonOther_clicked()
{
    close();
    emit signal_for_countinue();
}


void CashGiveWindow::on_insertButtonOther_clicked()
{
    float balanceCard, newBalanceCard, otherSum;
    query = new QSqlQuery(db);
    query->exec("SELECT * FROM Cards;");
    for(int i =0;i < index_db_cash;i++){
        query->next();

    }
    balanceCard = query->value(2).toFloat();
    query->exec();
    otherSum = QVariant(ui->otherLineEdit->text()).toInt();
    newBalanceCard = balanceCard - QVariant(otherSum).toFloat();
    if(newBalanceCard < 0 || QVariant(otherSum).toInt() % 5 != 0 ){
        ui->errorLabel->show();
    }else{
    query->prepare("UPDATE Cards SET Balance=:balance WHERE Balance=:old;");
    query->bindValue(":balance", newBalanceCard);
    query->bindValue(":old", balanceCard);
    query->exec();
    ui->stackedWidget->hide();
    ui->giveCahs_group->show();
    ui->main_label->hide();
    ui->otherSum_groupBox->hide();
    timer_wait = new QTimer();
    connect(timer_wait, SIGNAL(timeout()), this, SLOT(wait_Timer()));
    timer_wait->start(3000);
    connect(this, &CashGiveWindow::signal_for_check_cash, check_window, &CheckPrint::check_cash_count);
    emit signal_for_check_cash(QVariant(otherSum).toFloat());
    }
}


void CashGiveWindow::on_otherLineEdit_textEdited(const QString &arg1)
{
    ui->errorLabel->hide();
}

