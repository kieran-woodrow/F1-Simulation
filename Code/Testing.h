#ifndef TESTING_H
#define TESTING_H
#include "Car.h"
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

class Testing{
    public:
    Testing(Car* c);
    void StartTesting();
    virtual void ShowAllPartsEfficeny()=0;
    virtual void CalculateEachPartAddition()=0;
    virtual void CalculateAverageSpeedDifference()=0;
    virtual string getName()=0;
    virtual void setCar(Car* c){
        car = c;
        //WindTunnel::setCar(c);    
    };

    private:
    Car* car;

};
#endif