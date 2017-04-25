#include "signoptions.h"
#include "ui_signoptions.h"

SignOptions::SignOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignOptions)
{
    ui->setupUi(this);
}

SignOptions::~SignOptions()
{
    delete ui;
}
