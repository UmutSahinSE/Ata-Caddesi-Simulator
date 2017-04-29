#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent) : QWidget(parent)
{

}

void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
    this->x=ev->x();
    this->y=ev->y();
    emit MousePos();
}

void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    emit MousePressed();
}
