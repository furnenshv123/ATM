#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "change_lang.h"
#include "russian_pin.h"
#include "balancewindow.h"
#include "transferwindow.h"
#include "cashgivewindow.h"
#include "checkprint.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    //void keyPressEvent(QKeyEvent *e) override;

private slots:
    void on_pushButton_clicked();
    void wait_Timer();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
signals:
    void signal(int a);

private:
    Ui::MainWindow *ui;
    change_lang *window;
    QGraphicsScene *scene;
    QGraphicsScene *card_scene;
    QTimer *timer_wait;
    russian_pin *rus_pincode;
    BalanceWindow *balance_window;
    TransferWindow *transfer_window;
    CashGiveWindow *cash_window;
    CheckPrint *check_window;
};
#endif // MAINWINDOW_H
