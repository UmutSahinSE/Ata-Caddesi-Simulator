#ifndef CAR_H
#define CAR_H

#include <QLabel>
#include "onewayroad.h"

class Car : public QLabel
{
public:
    Car();
    int CurrentSpeed;
    int MaxSpeed;
    onewayroad *currentRoad;


};

#endif // CAR_H
