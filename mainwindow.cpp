#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include "refuge.h"
#include "onewayroad.h"
#include "roadoptions.h"
#include "intersection.h"
#include "intersectionoptions.h"
#include "zebracrossing.h"
#include "zebracrossingoptions.h"
#include "endoftheroad.h"
#include "endoftheroadoptions.h"
#include "carspawn.h"
#include "caroption.h"
#include "trafficlight.h"
#include "trafficlightoptions.h"
#include "sign.h"
#include "signoptions.h"



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
    oneway->setParent(ui->buildLabel);
    oneway->setGeometry(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    oneway->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
}

void MainWindow::AddTwoWayRoad()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x(),ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    forward->show();

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->buildLabel);
    backward->rotateSouth();
    backward->setGeometry(ui->buildLabel->mouselocation.x()-40,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    backward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
}

void MainWindow::AddTwoWayRoadWithRefuge()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()+10,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    forward->show();

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->buildLabel);
    backward->rotateSouth();
    backward->setGeometry(ui->buildLabel->mouselocation.x()-50,ui->buildLabel->mouselocation.y()-100,40,200);
    ui->buildLabel->raise();
    backward->show();

    refuge *refugePtr=new refuge;
    refugePtr->setParent(ui->buildLabel);
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

void MainWindow::AddTrafficLight()
{
    trafficlight *forward=new trafficlight;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->mouselocation.y()-25,20,50);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
}

void MainWindow::AddSign()
{
    sign *forward=new sign;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->mouselocation.y()-10,20,20);
    ui->buildLabel->raise();
    forward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
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
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(ChooseClickedItem()));
        return;
    }
    onewayroad dummy1;
    sign dummy2;
    endoftheroad dummy3;
    carspawn dummy4;
    trafficlight dummy5;
    zebracrossing dummy6;
    intersection dummy7;
    refuge dummy8;
    //square dummy9;
    QString oneway="onewayroad";
    if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()==oneway)
   {
        Roadoptions *newtab=new Roadoptions;
        QString tabname("onewayroad");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedOneWayRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        ui->OptionScreen->removeTab(0);
   }

//    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy2.metaObject()->className())
//    {
//        SignOptions *newtab=new SignOptions;
//        QString tabname("Sign Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedSign=static_cast<sign *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

//    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy3.metaObject()->className())
//    {
//        EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
//        QString tabname("End of the Road Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedEndOfTheRoad=static_cast<endoftheroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

//    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy4.metaObject()->className())
//    {
//        CarOption *newtab=new CarOption;
//        QString tabname("Car Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedCarSpawn=static_cast<carspawn *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

//    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy5.metaObject()->className())
//    {
//        TrafficLightOptions *newtab=new TrafficLightOptions;
//        QString tabname("Traffic Light Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedTrafficLight=static_cast<trafficlight *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

//    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy6.metaObject()->className())
//    {
//        ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
//        QString tabname("Zebra Crossing Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedZebraCrossing=static_cast<zebracrossing *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

//    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy7.metaObject()->className())
//    {
//        IntersectionOptions *newtab=new IntersectionOptions;
//        QString tabname("Intersection Options");
//        ui->OptionScreen->addTab(newtab,tabname);
//        newtab->selectedIntersection=static_cast<intersection *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
//        ui->OptionScreen->removeTab(0);
//    }

/*
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy8.metaObject()->className())
    {
        RefugeOptions *newtab=new RefugeOptions;
        QString tabname("Refuge Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedRefuge=static_cast<refuge*>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        ui->OptionScreen->removeTab(0);
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->metaObject()->className()==dummy9.metaObject()->className())
    {
        SquareOptions *newtab=new SquareOptions;
        QString tabname("Square Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedSquare=static_cast<square*>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        ui->OptionScreen->removeTab(0);
    }
    */


    disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(ChooseClickedItem()));

}

void MainWindow::disconnectMouseEvents()
{
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoadWithRefuge()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(ChooseClickedItem()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddIntersection()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
//    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSquare()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}
void MainWindow::on_actionOne_Way_triggered()
{
    //when one way road is chosen
    disconnectMouseEvents();
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

void MainWindow::on_actionTraffic_Light_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
}

void MainWindow::on_actionSign_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
}
