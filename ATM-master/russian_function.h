#ifndef RUSSIAN_FUNCTION_H
#define RUSSIAN_FUNCTION_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "cashgivewindow.h"
#include "balancewindow.h"
#include "transferwindow.h"
#include "choicecountinuewindow.h"

namespace Ui {
class russian_function;
}

class russian_function : public QWidget
{
    Q_OBJECT

public:
    explicit russian_function(QWidget *parent = nullptr);
    ~russian_function();
private slots:

    void on_transfer_button_clicked();


    void on_balance_button_clicked();

    void on_give_cashButton_clicked();

    void on_countinueButton_clicked();
    void accept_countinue_showSlot();
signals:

    void signal_pin();
    void signal_language(bool f);
public slots:
    void wait_Timer_transfer();
    void wait_Timer_balance();
    void wait_Timer_cash();
    void wait_Timer_countinue();
    void slot_for_lang(bool d);
private:
    Ui::russian_function *ui;
    QGraphicsScene *scene;
    QTimer *timer_wait;
    CashGiveWindow *cash_window;
    BalanceWindow *balance_window;
    TransferWindow *transfer_window;
    choiceCountinueWindow *countinue_window;

};

#endif // RUSSIAN_FUNCTION_H
