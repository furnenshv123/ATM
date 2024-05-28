#ifndef CHECKPRINT_H
#define CHECKPRINT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
namespace Ui {
class CheckPrint;
}

class CheckPrint : public QWidget
{
    Q_OBJECT

public:
    explicit CheckPrint(QWidget *parent = nullptr);
    ~CheckPrint();
public slots:
    void index_card_check(int ght);
    void check_cash_count(float cash_give);
    void slot_from_giveCash();
    void slot_from_transfer();
    void slot_receiverNumber(QString rec);
    void slot_moneyFromTransfer(float trans);
    void slot_changeLanguage(bool k);
private slots:
    void on_yesChoiceBtn_clicked();
    void on_noChoiceBtn_clicked();

    void on_continueButton_clicked();
    void wait_Timer_check();

signals:
    void signal_countinue_window();
private:
    Ui::CheckPrint *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QTimer *wait_timer;
    QGraphicsScene *scene;
};

#endif // CHECKPRINT_H
