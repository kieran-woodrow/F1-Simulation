#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H
#include "Testing.h"

class WindTunnel:public Testing{
    public:
    WindTunnel(Car* c);
    void ShowAllPartsEfficeny();
    void CalculateEachPartAddition();
    void CalculateAverageSpeedDifference();
    void resetTokens();
    void setCar(Car* c);
    Car* getCar(){return car_;};
    string getName();
    private:
    int tokens=400;
    Car* car_;
    float overallSpeed=0;

};
#endif