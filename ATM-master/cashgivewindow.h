#ifndef CASHGIVEWINDOW_H
#define CASHGIVEWINDOW_H

#include <QWidget>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "checkprint.h"
namespace Ui {
class CashGiveWindow;
}

class CashGiveWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CashGiveWindow(QWidget *parent = nullptr);
    ~CashGiveWindow();

private slots:
    void on_FiveButton_clicked();
    void wait_Timer();
    void on_TenButton_clicked();

    void on_TwentyButton_clicked();

    void on_fiftyButton_clicked();

    void on_oneHundredButton_clicked();

    void on_twoHundredButton_clicked();

    void on_cancelCashButton_clicked();

    void on_variantCashOne_clicked();

    void on_variantCashTwo_clicked();

    void on_otherSumButton_clicked();

    void on_correctButtonOther_clicked();

    void on_cancelButtonOther_clicked();

    void on_insertButtonOther_clicked();

    void on_otherLineEdit_textEdited(const QString &arg1);
public slots:
    void slot_index_for_dsb(int a);
    void slot_cash_language(bool k);
    void slot_checkprint_to_countinue();
signals:
    void signal_for_countinue();
    void signal_for_check_cash(float check_cash);
    void signal_from_giveCash();
    void signal_forLang(bool g);
private:
    Ui::CashGiveWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QGraphicsScene *scene;
    QTimer *timer_wait;
    CheckPrint *check_window;
};

#endif // CASHGIVEWINDOW_H
