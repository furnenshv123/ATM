#ifndef CHANGE_LANG_H
#define CHANGE_LANG_H

#include <QWidget>
#include <QKeyEvent>
#include "russian_pin.h"
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
namespace Ui {
class change_lang;
}

class change_lang : public QWidget
{
    Q_OBJECT

public:
    explicit change_lang(QWidget *parent = nullptr);
    ~change_lang();

private slots:
    void on_russianBtn_clicked();
    void wait_Timer();

    void on_englishBtn_clicked();
signals:
    void signal_language(bool c);
private:
    Ui::change_lang *ui;
    russian_pin *rus_pin;
    QGraphicsScene *scene;
    QTimer *timer_wait;
public:
    int index_from_main;
};

#endif // CHANGE_LANG_H
