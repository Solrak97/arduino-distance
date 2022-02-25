#ifndef DistanceSensor_h
#define DistanceSensor_h

#include "Arduino.h"

class DistanceSensor
{
private:
    int TRIGGER;
    int ECHO;
    double treshold;

    double TimeToEcho();

public:
    DistanceSensor(int trigger, int echo);
    void setTreshold(double treshold);
    double getDistance();
};

#endif