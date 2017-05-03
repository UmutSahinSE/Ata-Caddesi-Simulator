#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include <QScrollArea>
#include <QCursor>
#include <QBitmap>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    QBitmap nmap(":/pictures/One Way Road.png");
//    QCursor ncursor(nmap);
//    ui->BuildScreen->setCursor(ncursor);
    ui->setupUi(this);
    resize(1500,800);




}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::ChooseAddPosition()
{

}
void MainWindow::AddChosen()
{

}
void MainWindow::on_actionOne_Way_triggered()
{
    //add one way road
    connect(ui->buildLabel, SIGNAL(MousePos()),this, SLOT(ChooseAddPosition()));
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));

}



