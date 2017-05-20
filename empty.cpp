#include "empty.h"
#include "ui_empty.h"

Empty::Empty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Empty)
{
    ui->setupUi(this);
}

Empty::~Empty()
{
    delete ui;
}
