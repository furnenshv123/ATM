#ifndef BALANCEWINDOW_H
#define BALANCEWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "choicecountinuewindow.h"
namespace Ui {
class BalanceWindow;
}

class BalanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BalanceWindow(QWidget *parent = nullptr);
    ~BalanceWindow();


private slots:
    void on_pushButton_clicked();
public slots:
    void slot_index_db(int a);
    void slot_balance_language(bool h);
signals:
    void signal_when_ok();
private:
    Ui::BalanceWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    choiceCountinueWindow *countinue_window;
};

#endif // BALANCEWINDOW_H
