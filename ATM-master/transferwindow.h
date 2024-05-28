#ifndef TRANSFERWINDOW_H
#define TRANSFERWINDOW_H

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
#include "checkprint.h"
namespace Ui {
class TransferWindow;
}

class TransferWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TransferWindow(QWidget *parent = nullptr);
    ~TransferWindow();

private slots:




    void wait_Timer();

    void on_insertButton_clicked();

    void on_correctButton_clicked();

    void on_insertCardButton_clicked();
    void on_sumLineEdit_textEdited(const QString &arg1);
    void on_corrcetCardButton_clicked();

    void on_cancelButton_clicked();

    void on_cancelCardButton_clicked();
    void wait_TimerCancel();
    void on_cardNumber_textEdited(const QString &arg1);

signals:
    void signal_from_transfer();
    void signal_numberReceiver(QString rec);
    void signal_sumForReceive(float trans);
    void signal_forCheck();
    void signal_forChangeLang(bool k);
public slots:
    void slot_for_db(int a);
    void slot_transfer_language(bool t);
    void slot_for_countinue();
private:
    Ui::TransferWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QGraphicsScene *scene;
    QTimer *timer_wait;
    choiceCountinueWindow *countinue_window;
    CheckPrint *check_window;
};

#endif // TRANSFERWINDOW_H
