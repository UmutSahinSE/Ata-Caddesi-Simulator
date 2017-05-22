#include "spawnthread.h"
void SpawnThread::TakeVariables(bool verticle, int cars, MyLabel *mylabel)
{
    isVerticle=verticle;
    carsPerMinute=cars;
    buildLabel=mylabel;
}

SpawnThread::SpawnThread()
{

}

void SpawnThread::run()
{
    bool SpawnMoment[60];

    int counter=carsPerMinute;
    int pointer=0;
    int chanse=100;
    for(pointer=0;pointer<60;pointer++)
    {
       SpawnMoment[pointer]=false;
    }
    while (counter>0)
    {
       ++pointer;
       if(pointer==60)
       {
           pointer=0;
           chanse/=2;
           if(chanse<2) chanse=2;
       }

      if(SpawnMoment[pointer]==false)
       {
           SpawnMoment[pointer]=true;
           counter--;
       }
    }
    for(pointer=0;pointer<60;pointer++)
    {
      sleep(10);
      if(SpawnMoment[pointer])
      {
          if(isVerticle)
          {
              Car *newcar=new Car;
              newcar->setParent(buildLabel);
              newcar->setGeometry(0,0,50,50);
              QPixmap tempPix(":/pictures/RedLight.png");
              newcar->setPixmap(tempPix.scaled(50,50));
              newcar->show();
              buildLabel->raise();
              newcar->currentRoad=onRoad;
          }
      }
    }
}

void SpawnThread::startFunction()
{

    start();
}
