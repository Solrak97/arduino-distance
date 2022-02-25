#include "DistanceSensor.h"

DistanceSensor::DistanceSensor(int trigger, int echo)

{
    this->TRIGGER = trigger;
    this->ECHO = echo;
    this->treshold = -1;
}

double DistanceSensor::getDistance()
{
    double time;
    double distance;

    time = TimeToEcho();
    distance = time / 2;
    distance *= 0.0343;
    return distance;
}

double DistanceSensor::TimeToEcho()
{
    digitalWrite(TRIGGER, LOW);
    delayMicroseconds(5);
    digitalWrite(TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER, LOW);
    return pulseIn(ECHO, HIGH);
}