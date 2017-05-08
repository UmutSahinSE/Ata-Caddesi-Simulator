#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent) : QWidget(parent)
{

}

void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    this->mouselocation=ev->pos();
    emit MousePressed();
}
