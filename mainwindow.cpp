#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"


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
void MainWindow::ChooseAddPosition()
{
    //will probably be empty
}
void MainWindow::AddChosen(/*probably will take an item pointer as parameter*/)
{
    //pull items coordinates from buildLabel (mylabel type object) and add it there
    disconnect(ui->buildLabel, SIGNAL(MousePos()),this, SLOT(ChooseAddPosition()));
    //you dont have to get the coordinates from buildlabel anymore
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen()));
    //disconnect mouse press events to negate  more than one operations
    //automatically choose the added item

}
void MainWindow::on_actionOne_Way_triggered()
{
    //when one way road is chosen
    connect(ui->buildLabel, SIGNAL(MousePos()),this, SLOT(ChooseAddPosition()));
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddChosen(/*probably will take an item pointer as parameter*/)));
}



