#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include "onewayroad.h"
#include "refuge.h"
#include "roadoptions.h"
#include "intersection.h"
#include "zebracrossing.h"
#include "endoftheroad.h"
#include "carspawn.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(1500,800);
    connect(ui->buildLabel,SIGNAL(MouseOnObject()),this,SLOT(FrameItemOnHover()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddOneWayRoad()
{
    onewayroad *oneway=new onewayroad;
    oneway->setParent(ui->BuildScroll);
    oneway->setGeometry(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    oneway->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
}

void MainWindow::AddTwoWayRoad()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->BuildScroll);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-40,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    forward->show();

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->BuildScroll);
    backward->convertToRed();
    backward->setGeometry(ui->buildLabel->mouselocation.x(),ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    backward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
}

void MainWindow::AddTwoWayRoadWithRefuge()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->BuildScroll);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-50,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    forward->show();

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->BuildScroll);
    backward->convertToRed();
    backward->setGeometry(ui->buildLabel->mouselocation.x()+10,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    backward->show();

    refuge *refugePtr=new refuge;
    refugePtr->setParent(ui->BuildScroll);
    refugePtr->setGeometry(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->mouselocation.y()-100,20,200);
    ui->buildLabel->raise();
    refugePtr->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoadWithRefuge()));
}

void MainWindow::AddIntersection()
{
    intersection *forward=new intersection;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-40,ui->buildLabel->mouselocation.y()-40,80,80);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddIntersection()));
}

void MainWindow::AddZebraCrossing()
{
    zebracrossing *forward=new zebracrossing;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-25,ui->buildLabel->mouselocation.y()-10,50,20);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
}

void MainWindow::AddEndOfTheRoad()
{
    endoftheroad *forward=new endoftheroad;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-5,40,10);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
}

void MainWindow::AddCarSpawn()
{
    carspawn *forward=new carspawn;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-5,40,10);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}


void MainWindow::FrameItemOnHover()
{

//    QLabel *child = static_cast<QLabel*>(childAt(ui->buildLabel->mouselocation));
//    if (!child)
//        return;
//    child->setFrameStyle(QFrame::Panel | QFrame::Plain);
//    child->setLineWidth(3);
}

void MainWindow::ChooseClickedItem()
{
    QLabel* label= static_cast<QLabel*>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
    if(!label)
        return;
    if(label->metaObject()->className()=="onewayroad")
    {
        Roadoptions *newtab=new Roadoptions;
        QString tabname("Road Options");
        ui->OptionScreen->addTab(newtab,tabname);
        ui->OptionScreen->removeTab(0);
    }
    disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(ChooseClickedItem()));

}

void MainWindow::disconnectMouseEvents()
{
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoadWithRefuge()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(ChooseClickedItem()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddIntersection()));
//    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
//    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSquare()));
//    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}
void MainWindow::on_actionOne_Way_triggered()
{
    //when one way road is chosen
    disconnectMouseEvents();
    QPixmap cursorpic(":/pictures/One Way Road.png");
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
}

void MainWindow::on_actionTwo_Ways_triggered()
{
//    when two ways is chosen
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
}

void MainWindow::on_ChooseButton_clicked()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(ChooseClickedItem()));
}

void MainWindow::on_actionTwo_Ways_with_Refuge_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoadWithRefuge()));
}

void MainWindow::on_actionIntersection_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddIntersection()));
}

void MainWindow::on_actionZebra_Crossings_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
}

void MainWindow::on_actionIntersection_2_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
}

void MainWindow::on_actionCar_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}
