#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <Qevent>

class MyLabel : public QWidget
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = 0);

    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    QPoint mouselocation;

signals:

    void MousePressed();
    void MouseOnObject();

public slots:

};

#endif // MYLABEL_H
