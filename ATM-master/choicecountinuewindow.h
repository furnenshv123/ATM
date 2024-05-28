#ifndef CHOICECOUNTINUEWINDOW_H
#define CHOICECOUNTINUEWINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>

namespace Ui {
class choiceCountinueWindow;
}

class choiceCountinueWindow : public QWidget
{
    Q_OBJECT

public:
    explicit choiceCountinueWindow(QWidget *parent = nullptr);
    ~choiceCountinueWindow();

private slots:

    void on_noButton_clicked();
    void on_yesButton_clicked();
    void on_badSmile_clicked();

    void on_midSmile_clicked();

    void on_goodSmile_clicked();

public slots:
    void slot_countinue_lang(bool f);
signals:
    void countinue_accept_signal();

private:
    Ui::choiceCountinueWindow *ui;
    QGraphicsScene *scene;
};

#endif // CHOICECOUNTINUEWINDOW_H
