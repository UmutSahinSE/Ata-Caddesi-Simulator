#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mylabel.h"
#include "refuge.h"
#include "refugeoptions.h"
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
#include "square.h"
#include "squareoptions.h"
#include "empty.h"
#include "simulationresults.h"
#include "spawnthread.h"

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

void MainWindow::AddOneWayRoad()
{
    onewayroad *oneway=new onewayroad;
    oneway->setParent(ui->buildLabel);
    oneway->setGeometry(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-100,40,200);
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="intersection")
        {
            if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40<=ui->buildLabel->mouselocation.y()) //if lower half is clicked
            oneway->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80);
            else //if upper half is clicked
            oneway->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-200);
        }
        else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="square")
        {
            if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80<=ui->buildLabel->mouselocation.y()) //if lower half is clicked
            oneway->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+160);
            else //if upper half is clicked
            oneway->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-200);
        }
        else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
        {
           if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
           {
                oneway->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-180);

                     if(ui->buildLabel->mouselocation.x()>=static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-40) //if tip of road is clicked(40 pixel)
                     {
                        oneway->move(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-180);
                     }
           }
           else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
           {
               oneway->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-180);

                    if(ui->buildLabel->mouselocation.x()<=static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()+40)
                    {
                       oneway->move(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-180);
                    }
           }
           else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
           {
               oneway->move(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-200);
           }
           else
           {
               delete oneway;
               return;
           }

        }
    }
    oneway->roadLine->setLine(oneway->x()+20,oneway->y()+200,oneway->x()+20,oneway->y());
    ui->buildLabel->raise();
    oneway->show();
    Roadoptions *newtab=new Roadoptions;
    QString tabname("Road Options");
    ui->OptionScreen->addTab(newtab,tabname);
    newtab->selectedOneWayRoad=oneway;
    newtab->buildLabel=ui->buildLabel;
    newtab->tempMW=this;
    connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
    ui->OptionScreen->removeTab(0);
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddOneWayRoad()));
}

void MainWindow::AddTwoWayRoad()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x(),ui->buildLabel->mouselocation.y()-100,40,200);
    forward->roadLine->setLine(forward->x()+20,forward->y()+200,forward->x()+20,forward->y());

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->buildLabel);
    backward->setGeometry(ui->buildLabel->mouselocation.x()-40,ui->buildLabel->mouselocation.y()-100,40,200);
    backward->roadLine->setLine(backward->x()+20,backward->y()+200,backward->x()+20,backward->y());
    backward->rotateSouth();

    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="intersection")
        {
            forward->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80);
            backward->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80);
        }
    }
    forward->roadLine->setLine(forward->x()+20,forward->y()+200,forward->x()+20,forward->y());
    backward->roadLine->setLine(backward->x()+20,backward->y(),backward->x()+20,backward->y()+200);
    forward->show();
    backward->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTwoWayRoad()));
}

void MainWindow::AddTwoWayRoadWithRefuge()
{
    onewayroad *forward=new onewayroad;
    forward->setParent(ui->buildLabel);
    forward->setGeometry(ui->buildLabel->mouselocation.x()+10,ui->buildLabel->mouselocation.y()-100,40,200);
    forward->roadLine->setLine(forward->x()+20,forward->y()+200,forward->x()+20,forward->y());
    ui->buildLabel->raise();
    forward->show();

    onewayroad *backward=new onewayroad;
    backward->setParent(ui->buildLabel);
    backward->setGeometry(ui->buildLabel->mouselocation.x()-50,ui->buildLabel->mouselocation.y()-100,40,200);
    backward->roadLine->setLine(backward->x()+20,backward->y()+200,backward->x()+20,backward->y());
    backward->rotateSouth();
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
    intersection *intersect=new intersection;
    intersect->setParent(ui->buildLabel);
    intersect->setGeometry(ui->buildLabel->mouselocation.x()-40,ui->buildLabel->mouselocation.y()-40,80,80);
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)&&ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
        {
            intersect->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-60,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-80,80,80);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            intersect->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2(),80,80);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
        {
            intersect->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2(),static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-60,80,80);
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            intersect->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-80,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-20,80,80);
        }
    }
    intersect->stackUnder(ui->buildLabel);
    intersect->show();
    IntersectionOptions *newtab=new IntersectionOptions;
    QString tabname("Intersection Options");
    ui->OptionScreen->addTab(newtab,tabname);
    newtab->selectedIntersection=intersect;
    connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
    ui->OptionScreen->removeTab(0);
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddIntersection()));
}

void MainWindow::AddZebraCrossing()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AddZebraCrossing()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90||static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            zebracrossing *crossing=new zebracrossing;
            crossing->setParent(ui->buildLabel);
            crossing->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->mouselocation.y()-10,40,20);
            ui->buildLabel->raise();
            crossing->show();

            ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
            QString tabname("Zebra Crossing Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedZebraCrossing=crossing;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);

            if(ui->buildLabel->childAt(crossing->x()-1,crossing->y())&&ui->buildLabel->childAt(crossing->x()-1,crossing->y())->accessibleDescription()=="refuge"&&ui->buildLabel->childAt(crossing->x()-21,crossing->y())->accessibleDescription()=="onewayroad")
            {
                zebracrossing *crossing2=new zebracrossing;
                crossing2->setParent(ui->buildLabel);
                crossing2->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-60,ui->buildLabel->mouselocation.y()-10,40,20);
                ui->buildLabel->raise();
                crossing2->show();
                ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
                QString tabname("Zebra Crossing Options");
                ui->OptionScreen->addTab(newtab,tabname);
                newtab->selectedZebraCrossing=crossing2;
                connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
                ui->OptionScreen->removeTab(0);
            }
            if(ui->buildLabel->childAt(crossing->x()+41,crossing->y())&&ui->buildLabel->childAt(crossing->x()+41,crossing->y())->accessibleDescription()=="refuge"&&ui->buildLabel->childAt(crossing->x()+61,crossing->y())->accessibleDescription()=="onewayroad")
            {
                zebracrossing *crossing3=new zebracrossing;
                crossing3->setParent(ui->buildLabel);
                crossing3->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+60,ui->buildLabel->mouselocation.y()-10,40,20);
                ui->buildLabel->raise();
                crossing3->show();
                ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
                QString tabname("Zebra Crossing Options");
                ui->OptionScreen->addTab(newtab,tabname);
                newtab->selectedZebraCrossing=crossing3;
                connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
                ui->OptionScreen->removeTab(0);
            }
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0||static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            zebracrossing *crossing=new zebracrossing;
            crossing->setParent(ui->buildLabel);
            crossing->setGeometry(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y(),20,40);
            crossing->rotate();
            ui->buildLabel->raise();
            crossing->show();
            ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
            QString tabname("Zebra Crossing Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedZebraCrossing=crossing;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
            if(ui->buildLabel->childAt(crossing->x(),crossing->y()-1)&&ui->buildLabel->childAt(crossing->x(),crossing->y()-1)->accessibleDescription()=="refuge"&&ui->buildLabel->childAt(crossing->x(),crossing->y()-21)->accessibleDescription()=="onewayroad")
            {
                zebracrossing *crossing2=new zebracrossing;
                crossing2->setParent(ui->buildLabel);
                crossing2->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->mouselocation.y()-60,40,20);
                crossing2->rotate();
                ui->buildLabel->raise();
                crossing2->show();
                ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
                QString tabname("Zebra Crossing Options");
                ui->OptionScreen->addTab(newtab,tabname);
                newtab->selectedZebraCrossing=crossing2;
                connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
                ui->OptionScreen->removeTab(0);
            }
            if(ui->buildLabel->childAt(crossing->x()+41,crossing->y())&&ui->buildLabel->childAt(crossing->x()+41,crossing->y())->accessibleDescription()=="refuge"&&ui->buildLabel->childAt(crossing->x()+61,crossing->y())->accessibleDescription()=="onewayroad")
            {
                zebracrossing *crossing3=new zebracrossing;
                crossing3->setParent(ui->buildLabel);
                crossing3->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-10,ui->buildLabel->mouselocation.y()+60,40,20);
                crossing3->rotate();
                ui->buildLabel->raise();
                crossing3->show();
                ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
                QString tabname("Zebra Crossing Options");
                ui->OptionScreen->addTab(newtab,tabname);
                newtab->selectedZebraCrossing=crossing3;
                connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
                ui->OptionScreen->removeTab(0);
            }
        }
    }

    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
}

void MainWindow::AddEndOfTheRoad()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AddEndOfTheRoad()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
        {
            endoftheroad *end=new endoftheroad;
            end->setParent(ui->buildLabel);
            end->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2(),40,10);
            ui->buildLabel->raise();
            end->show();
            EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
            QString tabname("End of the Road Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedEndOfTheRoad=end;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            endoftheroad *end=new endoftheroad;
            end->setParent(ui->buildLabel);
            end->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-10,40,10);
            ui->buildLabel->raise();
            end->show();
            EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
            QString tabname("End of the Road Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedEndOfTheRoad=end;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
        {
            endoftheroad *end=new endoftheroad;
            end->setParent(ui->buildLabel);
            end->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2()-10,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-20,40,10);
            end->rotate();
            ui->buildLabel->raise();
            end->show();
            EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
            QString tabname("End of the Road Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedEndOfTheRoad=end;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            endoftheroad *end=new endoftheroad;
            end->setParent(ui->buildLabel);
            end->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x2(),static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y2()-20,40,10);
            end->rotate();
            ui->buildLabel->raise();
            end->show();
            EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
            QString tabname("End of the Road Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedEndOfTheRoad=end;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }
    }

    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
}

void MainWindow::AddCarSpawn()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AddCarSpawn()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            carspawn *spawn=new carspawn;
            spawn->setParent(ui->buildLabel);
            spawn->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x1()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y1(),40,10);
            ui->buildLabel->raise();
            SpawnThread *theSpawnThread=new SpawnThread;
            spawn->tempMw=this;
            spawn->buildLabel=ui->buildLabel;
            connect(this,SIGNAL(Simulate()),theSpawnThread,SLOT(startFunction()));
            spawn->onRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(spawn->x()+20,spawn->y()-40));
            spawn->SetupThread(theSpawnThread);
            spawn->show();
            CarOption *newtab=new CarOption;
            QString tabname("Car Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedCarSpawn=spawn;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);

        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
        {
            carspawn *spawn=new carspawn;

            spawn->setParent(ui->buildLabel);
            spawn->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x1()-20,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y1()-10,40,10);
            ui->buildLabel->raise();
            SpawnThread *theSpawnThread=new SpawnThread;
            spawn->tempMw=this;
            spawn->buildLabel=ui->buildLabel;
            connect(this,SIGNAL(Simulate()),theSpawnThread,SLOT(startFunction()));
            spawn->onRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(spawn->x()+20,spawn->y()-40));
            spawn->SetupThread(theSpawnThread);
            spawn->show();
            CarOption *newtab=new CarOption;
            QString tabname("Car Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedCarSpawn=spawn;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            carspawn *spawn=new carspawn;
            spawn->setParent(ui->buildLabel);
            spawn->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x1()-10,static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y1()-20,40,10);
            spawn->rotate();
            SpawnThread *theSpawnThread=new SpawnThread;
            spawn->tempMw=this;
            spawn->buildLabel=ui->buildLabel;
            connect(this,SIGNAL(Simulate()),theSpawnThread,SLOT(startFunction()));
            spawn->onRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(spawn->x()+20,spawn->y()-40));
            spawn->SetupThread(theSpawnThread);
            ui->buildLabel->raise();
            spawn->show();
            CarOption *newtab=new CarOption;
            QString tabname("Car Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedCarSpawn=spawn;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
        {
            carspawn *spawn=new carspawn;
            spawn->setParent(ui->buildLabel);
            spawn->setGeometry(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->x1(),static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadLine->y1()-20,40,10);
            spawn->rotate();
            SpawnThread *theSpawnThread=new SpawnThread;
            spawn->tempMw=this;
            spawn->buildLabel=ui->buildLabel;
            connect(this,SIGNAL(Simulate()),theSpawnThread,SLOT(startFunction()));
            spawn->onRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(spawn->x()+20,spawn->y()-40));
            spawn->SetupThread(theSpawnThread);
            ui->buildLabel->raise();
            spawn->show();
            CarOption *newtab=new CarOption;
            QString tabname("Car Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedCarSpawn=spawn;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }
    }



    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}

void MainWindow::AddTrafficLight()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AddCarSpawn()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        trafficlight *light=new trafficlight;
        light->setParent(ui->buildLabel);
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            light->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-20,ui->buildLabel->mouselocation.y()-15);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
        {
            light->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->mouselocation.y()-15);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            light->move(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-30);
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
        {
            light->move(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-30);
        }
        ui->buildLabel->raise();
        light->show();

        TrafficLightOptions *newtab=new TrafficLightOptions;
        QString tabname("Traffic Light Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedTrafficLight=light;
        newtab->buildLabel=ui->buildLabel;
        newtab->tempMW=this;
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
}

void MainWindow::AddSign()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AddSign()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        sign *newsign=new sign;
        newsign->setParent(ui->buildLabel);
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
        {
            newsign->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-20,ui->buildLabel->mouselocation.y()-10);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
        {
            newsign->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->mouselocation.y()-10);
        }

        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            newsign->move(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-20);
        }
        else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
        {
            newsign->move(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-20);
        }
        ui->buildLabel->raise();
        newsign->show();

        SignOptions *newtab=new SignOptions;
        QString tabname("Sign Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedSign=newsign;
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
}

void MainWindow::AddSquare()
{
    Square *circle=new Square;
    circle->setParent(ui->buildLabel);
    circle->setGeometry(ui->buildLabel->mouselocation.x()-80, ui->buildLabel->mouselocation.y()-80,160,160);
    ui->buildLabel->raise();
    circle->show();
    squareOptions *newtab=new squareOptions;
    QString tabname("Square Options");
    ui->OptionScreen->addTab(newtab,tabname);
    newtab->selectedSquare=circle;
    connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
    ui->OptionScreen->removeTab(0);
    disconnect(ui->buildLabel, SIGNAL(MousePressed()), this, SLOT(AddSquare()));
}

void MainWindow::ReplaceRoad()
{
    onewayroad *choosenRoad=static_cast<Roadoptions *>(ui->OptionScreen->currentWidget())->selectedOneWayRoad;

    choosenRoad->setUpdatesEnabled(false);
    qDeleteAll(choosenRoad->findChildren<QWidget*>("", Qt::FindDirectChildrenOnly));
    choosenRoad->setUpdatesEnabled(true);

    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)&&ui->buildLabel->childAt(ui->buildLabel->mouselocation)!=static_cast<QLabel *>(choosenRoad))
    {
        if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="intersection")
        {
            if(choosenRoad->roadAngle==90)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40<=ui->buildLabel->mouselocation.y()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80);
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
            }
            else if(choosenRoad->roadAngle==180)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40>=ui->buildLabel->mouselocation.x()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+80,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
            }
            else if(choosenRoad->roadAngle==0)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40>=ui->buildLabel->mouselocation.x()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+80,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
            }
            else if(choosenRoad->roadAngle==270)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40<=ui->buildLabel->mouselocation.y()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80);
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-200);
            }

        }
        else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="square")
        {
            if(choosenRoad->roadAngle==90||choosenRoad->roadAngle==270)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+80<=ui->buildLabel->mouselocation.y()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length-40);
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
            }
            else if(choosenRoad->roadAngle==0||choosenRoad->roadAngle==180)
            {
                if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+80>=ui->buildLabel->mouselocation.x()) //if lower half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->mouselocation.y()-20);
                else //if upper half is clicked
                choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length-40,ui->buildLabel->mouselocation.y()-20);
            }

        }
        else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
        {
           if(choosenRoad->roadAngle==90)
           {
              if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
              {
                 choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
                 if(ui->buildLabel->mouselocation.x()>=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length-40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length-40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
              {
                 choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
                 if(ui->buildLabel->mouselocation.x()<=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-choosenRoad->Length);
              }
              else
              {
                  return;
              }
          }
          if(choosenRoad->roadAngle==270)
           {
              if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
              {
                 choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
                 if(ui->buildLabel->mouselocation.x()>=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length-40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length-40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
              {
                 choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
                 if(ui->buildLabel->mouselocation.x()<=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40);
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length);
              }
              else
              {
                  return;
              }
          }
          else if(choosenRoad->roadAngle==0)
           {
              if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->mouselocation.y()-20);
                 if(ui->buildLabel->mouselocation.y()<=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
              {
                  choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->mouselocation.y()-20);
                  if(ui->buildLabel->mouselocation.y()>=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length-40) //if tip of road is clicked(40 pixel)
                  {
                        choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length-40);
                  }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
              }
              else
              {
                  return;
              }
          }
          else if(choosenRoad->roadAngle==180)
           {
              if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==90)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->mouselocation.y()-20);
                 if(ui->buildLabel->mouselocation.y()<=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+40) //if tip of road is clicked(40 pixel)
                 {
                       choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
                 }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==270)
              {
                  choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->mouselocation.y()-20);
                  if(ui->buildLabel->mouselocation.y()>=ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length-40) //if tip of road is clicked(40 pixel)
                  {
                        choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()+choosenRoad->Length-40);
                  }
              }
              else if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
              {
                 choosenRoad->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()-choosenRoad->Length,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
              }
              else
              {
                  return;
              }
          }
        }
    }
    else
    {
        choosenRoad->move(ui->buildLabel->mouselocation.x()-20,ui->buildLabel->mouselocation.y()-choosenRoad->Length/2);
        if(choosenRoad->roadAngle==0||choosenRoad->roadAngle==180)
        choosenRoad->move(ui->buildLabel->mouselocation.x()-choosenRoad->Length/2,ui->buildLabel->mouselocation.y()-20);
    }
    choosenRoad->roadLine->setLine(choosenRoad->x()+20,choosenRoad->y()+choosenRoad->Length,choosenRoad->x()+20,choosenRoad->y());
    ui->buildLabel->raise();
    choosenRoad->show();
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(ReplaceRoad()));
}

void MainWindow::ReplaceRefuge()
{
     refuge *chosenRefuge=static_cast<RefugeOptions *>(ui->OptionScreen->currentWidget())->selectedRefuge;
     if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)&&ui->buildLabel->childAt(ui->buildLabel->mouselocation)!=static_cast<QLabel *>(chosenRefuge))
     {
         if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0||static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
         {
              chosenRefuge->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-20);
         }
         else
         {
               chosenRefuge->move(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y());
         }
     }
     else
     {
         chosenRefuge->move(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->mouselocation.y()-chosenRefuge->length/2);
         if(!chosenRefuge->isVerticle)
         chosenRefuge->move(ui->buildLabel->mouselocation.x()-chosenRefuge->length/2,ui->buildLabel->mouselocation.y()-10);
     }
     ui->buildLabel->raise();
     chosenRefuge->show();
     disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(ReplaceRefuge()));
}

void MainWindow::AddRefuge()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
       refuge *refugePtr=new refuge;
       refugePtr->setParent(ui->buildLabel);
       refugePtr->setGeometry(ui->buildLabel->mouselocation.x()-10,ui->buildLabel->mouselocation.y()-100,20,200);
       ui->buildLabel->raise();
       refugePtr->show();
       RefugeOptions *newtab=new RefugeOptions;
       QString tabname("Refuge Options");
       ui->OptionScreen->addTab(newtab,tabname);
       newtab->selectedRefuge=refugePtr;
       newtab->tempMW=this;
       newtab->buildLabel=ui->buildLabel;
       connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
       ui->OptionScreen->removeTab(0);
       disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddRefuge()));
       return;
    }
    else if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        if(static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==0||static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->roadAngle==180)
        {
            refuge *refugePtr=new refuge;
            refugePtr->setParent(ui->buildLabel);
            refugePtr->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x(),ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y()-20,200,20);
            ui->buildLabel->raise();
            refugePtr->show();
            refugePtr->isVerticle=false;
            RefugeOptions *newtab=new RefugeOptions;
            QString tabname("Refuge Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedRefuge=refugePtr;
            newtab->tempMW=this;
            newtab->buildLabel=ui->buildLabel;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }
        else
        {
            refuge *refugePtr=new refuge;
            refugePtr->setParent(ui->buildLabel);
            refugePtr->setGeometry(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->x()+40,ui->buildLabel->childAt(ui->buildLabel->mouselocation)->y(),20,200);
            ui->buildLabel->raise();
            refugePtr->show();
            RefugeOptions *newtab=new RefugeOptions;
            QString tabname("Refuge Options");
            ui->OptionScreen->addTab(newtab,tabname);
            newtab->selectedRefuge=refugePtr;
            newtab->tempMW=this;
            newtab->buildLabel=ui->buildLabel;
            connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
            ui->OptionScreen->removeTab(0);
        }

    }
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddRefuge()));

}

void MainWindow::AppointRoad()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AppointRoad()));
        return;
    }
    if(ui->buildLabel->childAt(ui->buildLabel->mouselocation)->accessibleDescription()=="onewayroad")
    {
        static_cast<TrafficLightOptions *>(ui->OptionScreen->currentWidget())->selectedTrafficLight->appointedRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
    }
    disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(AppointRoad()));
}



void MainWindow::ChooseClickedItem()
{
    if(!ui->buildLabel->childAt(ui->buildLabel->mouselocation))
    {
        disconnect(ui->buildLabel,SIGNAL(MousePressed()),this,SLOT(ChooseClickedItem()));
        return;
    }

    if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="onewayroad")
   {
        Roadoptions *newtab=new Roadoptions;
        QString tabname("Road Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedOneWayRoad=static_cast<onewayroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        newtab->buildLabel=ui->buildLabel;
        newtab->tempMW=this;
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
   }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="sign")
    {
        SignOptions *newtab=new SignOptions;
        QString tabname("Sign Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedSign=static_cast<sign *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="endoftheroad")
    {
        EndOfTheRoadOptions *newtab=new EndOfTheRoadOptions;
        QString tabname("End of the Road Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedEndOfTheRoad=static_cast<endoftheroad *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="carspawn")
    {
        CarOption *newtab=new CarOption;
        QString tabname("Car Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedCarSpawn=static_cast<carspawn *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="trafficlight")
    {
        TrafficLightOptions *newtab=new TrafficLightOptions;
        QString tabname("Traffic Light Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedTrafficLight=static_cast<trafficlight *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        newtab->buildLabel=ui->buildLabel;
        newtab->tempMW=this;
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="zebracrossing")
    {
        ZebraCrossingOptions *newtab=new ZebraCrossingOptions;
        QString tabname("Zebra Crossing Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedZebraCrossing=static_cast<zebracrossing *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="intersection")
    {
        IntersectionOptions *newtab=new IntersectionOptions;
        QString tabname("Intersection Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedIntersection=static_cast<intersection *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="square")
    {
        squareOptions *newtab=new squareOptions;
        QString tabname("Square Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedSquare=static_cast<Square *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
        ui->OptionScreen->removeTab(0);
    }

    else if(static_cast<QLabel *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation))->accessibleDescription()=="refuge")
    {
        RefugeOptions *newtab=new RefugeOptions;
        QString tabname("Refuge Options");
        ui->OptionScreen->addTab(newtab,tabname);
        newtab->selectedRefuge=static_cast<refuge *>(ui->buildLabel->childAt(ui->buildLabel->mouselocation));
        newtab->tempMW=this;
        newtab->buildLabel=ui->buildLabel;
        connect(newtab, SIGNAL(pressDelete()),this, SLOT(ResetOptionScreen()));
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
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSign()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddEndOfTheRoad()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSquare()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddTrafficLight()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddZebraCrossing()));
    disconnect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddCarSpawn()));
}

void MainWindow::ResetOptionScreen()
{
    ui->OptionScreen->removeTab(0);
    Empty *blank=new Empty;
    ui->OptionScreen->addTab(blank,"Options");
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

void MainWindow::on_actionSquare_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddSquare()));
}

void MainWindow::on_actionNew_triggered()
{
    ui->buildLabel->setUpdatesEnabled(false);
    qDeleteAll(ui->buildLabel->findChildren<QWidget*>("", Qt::FindDirectChildrenOnly));
    ui->buildLabel->setUpdatesEnabled(true);
}

void MainWindow::on_actionRefuge_triggered()
{
    disconnectMouseEvents();
    connect(ui->buildLabel, SIGNAL(MousePressed()),this, SLOT(AddRefuge()));
}
void MainWindow::on_SimulateButton_clicked()
{
    SimulationResults *Results=new SimulationResults;
    ui->OptionScreen->removeTab(0);
    ui->OptionScreen->addTab(Results,"SimulatonResults");

    emit Simulate();
}
