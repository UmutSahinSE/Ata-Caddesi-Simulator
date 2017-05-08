#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include "onewayroad.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(1500,800);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddChosen(/*probably will take an item pointer as parameter*/)
{


}
void MainWindow::on_actionOne_Way_triggered()
{
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));
    //when one way road is chosen

    onewayroad *oneway=new onewayroad;
    oneway->setParent(ui->BuildScroll);

    oneway->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));


}

void MainWindow::on_actionTwo_Ways_triggered()
{
//    when two ways is chosen
   connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));

   onewayroad *forward=new onewayroad;
   forward->setParent(ui->BuildScroll);
   forward->setGeometry(500,500,40,200);
   forward->show();

   onewayroad *backward=new onewayroad;
   backward->setParent(ui->BuildScroll);
   backward->convertToRed();
   backward->setGeometry(460,500,40,200);
   backward->show();

   disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));

}
