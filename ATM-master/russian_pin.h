#ifndef RUSSIAN_PIN_H
#define RUSSIAN_PIN_H

#include <QWidget>
#include <QLineEdit>
#include <QEvent>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "russian_function.h"
#include "balancewindow.h"
#include "cashgivewindow.h"
namespace Ui {
class russian_pin;
}

class russian_pin : public QWidget
{
    Q_OBJECT

public:
    explicit russian_pin(QWidget *parent = nullptr);
    ~russian_pin();

private slots:
    void wait_Timer();
    void on_insertButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);
public slots:
    void slot(int a);

    void slot_pin_show();
    void slot_language(bool c);
signals:
    void signal_for_lang(bool d);
private:
    Ui::russian_pin *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    russian_function *func_window;
    QGraphicsScene *scene;
    QTimer *timer_wait;
    BalanceWindow *balance_window;
    CashGiveWindow *cash_window;
};



#endif // RUSSIAN_PIN_H
