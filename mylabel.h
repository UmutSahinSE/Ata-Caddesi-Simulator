#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QMouseEvent>
#include <Qevent>

class MyLabel : public QWidget
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = 0);
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    int x,y;

signals:

    void MousePressed();
    void MousePos();

public slots:

};

#endif // MYLABEL_H
