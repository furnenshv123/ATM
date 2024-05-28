#include "checkprint.h"
#include "ui_checkprint.h"
#include <QDateTime>
#include <QRandomGenerator>
int index_for_check;
float cash_from_give = NULL;
float cash_from_transfer = NULL;
bool choice_language;
QString cardNumber;
QString transferCardNumber;
QString cardHolderName;
CheckPrint::CheckPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckPrint)
{
    ui->setupUi(this);
    QPixmap load_pict(":/rec/pictures/free-icon-receipt-5816416.png");
    QSize PicSize(250,250);
    load_pict = load_pict.scaled(PicSize, Qt::KeepAspectRatio);
    scene = new QGraphicsScene(0,0,360,360,this);
    ui->graphicsView_2->setScene(scene);
    scene->addPixmap(load_pict)->setPos(65,50);
    ui->wait_group->hide();
    ui->graphicsView_2->setFrameStyle(QFrame::NoFrame);
    ui->textEdit->hide();
    ui->continueButton->hide();
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
    for(int i = 0;i < index_for_check;i++){
        query->next();
    }
    cardNumber = query->value(1).toString();
    cardHolderName = query->value(3).toString();
}

CheckPrint::~CheckPrint()
{
    delete ui;
}

void CheckPrint::index_card_check(int ght)
{
    index_for_check = ght;
}

void CheckPrint::check_cash_count(float cash_give)
{
    cash_from_give = cash_give;
}

void CheckPrint::slot_from_giveCash()
{

    QString hashNumber = cardNumber.replace(0, 12, "************");
    int randomNumber = QRandomGenerator::global()->bounded(1, 10000);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDate currentDate = currentDateTime.date();
    QTime currentTime = currentDateTime.time();
    QString timeString = currentTime.toString("hh:mm:ss");
    QString dateString = currentDate.toString("yyyy-MM-dd");
    QString textForCheck = "ОАО АСБ БАНК\nТЕЛЕФОН: 130\nБАНКОМАТ: АТМ56674\nГ.МИНСК УЛ.ЛОМОНОСОВА, 5 \nКАРТ-ЧЕК N" + QVariant(randomNumber).toString() + "\n\tВЫДАЧА НАЛИЧНЫХ ДЕНЕГ\nДАТА: " + dateString + " ВРЕМЯ: " + timeString + "\nКАРТОЧКА: " + hashNumber + "\nСУММА: "+ QVariant(cash_from_give).toString() +"\nНоситель карты: "+ cardHolderName + "\nОДОБРЕНО БАНКОМ. КОД: 000" + "\n\t            СПАСИБО!";
    ui->textEdit->setText(textForCheck);

    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void CheckPrint::slot_from_transfer()
{
    QString hashNumber = cardNumber.replace(0, 12, "************");
    QString hashNumberReceive = transferCardNumber.replace(0, 12, "************");
    int randomNumber = QRandomGenerator::global()->bounded(1, 10000);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDate currentDate = currentDateTime.date();
    QTime currentTime = currentDateTime.time();
    QString timeString = currentTime.toString("hh:mm:ss");
    QString dateString = currentDate.toString("yyyy-MM-dd");
    QString textForCheck = "ОАО АСБ БАНК\nТЕЛЕФОН: 130\nБАНКОМАТ: АТМ56674\nГ.МИНСК УЛ.ЛОМОНОСОВА, 5 \nКАРТ-ЧЕК N" + QVariant(randomNumber).toString() + "\n\tПЕРЕВОД СРЕДСТВ С КАРТЫ НА КАРТУ\nДАТА: " + dateString + " ВРЕМЯ: " + timeString + "\nКАРТОЧКА ОТПРАВИТЕЛЯ: " + hashNumber + "\nСУММА: "+ QVariant(cash_from_transfer).toString() +"\nНоситель карты: "+ cardHolderName +"\nКАРТА ПОЛУЧАТЕЛЯ: "+ hashNumberReceive + "\nОДОБРЕНО БАНКОМ. КОД: 000" + "\n\t            СПАСИБО!";
    ui->textEdit->setText(textForCheck);

    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void CheckPrint::slot_receiverNumber(QString rec)
{
    transferCardNumber = rec;
}

void CheckPrint::slot_moneyFromTransfer(float trans)
{
    cash_from_transfer = trans;
}

void CheckPrint::slot_changeLanguage(bool k)
{
    choice_language = k;
    if(k==1){
        ui->noChoiceBtn->setText("No");
        ui->yesChoiceBtn->setText("Yes");
        ui->questionLabel->setText("Print a check?");
        ui->label_2->setText("Pick up the check");
    }
}

void CheckPrint::on_yesChoiceBtn_clicked()
{
    ui->wait_group->show();
    ui->noChoiceBtn->hide();
    ui->yesChoiceBtn->hide();
    ui->questionLabel->hide();
    wait_timer = new QTimer();
    wait_timer->start(3000);
    connect(wait_timer, SIGNAL(timeout()), this, SLOT(wait_Timer_check()));

}


void CheckPrint::on_noChoiceBtn_clicked()
{
    close();
    emit signal_countinue_window();
}


void CheckPrint::on_continueButton_clicked()
{
    close();
    emit signal_countinue_window();
}

void CheckPrint::wait_Timer_check()
{
    ui->wait_group->hide();
    ui->textEdit->show();
    ui->continueButton->show();
    wait_timer->stop();
}

