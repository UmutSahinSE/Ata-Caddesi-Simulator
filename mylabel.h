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

    void mousePressEvent(QMouseEvent *ev);
     QPoint mouselocation;

signals:

    void MousePressed();

public slots:

};

#endif // MYLABEL_H
