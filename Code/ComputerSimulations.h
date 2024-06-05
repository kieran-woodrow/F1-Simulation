#ifndef COMPUTERSIMULATIONS_H
#define COMPUTERSIMULATIONS_H

#include "Testing.h"
#include <iterator>
class ComputerSimulations:public Testing{
    public:
    ComputerSimulations(Car *c);
    void ShowAllPartsEfficeny();
    void CalculateEachPartAddition();
    void CalculateAverageSpeedDifference();
    float randomNumberGenerator();
    string getName();
    private:
    Car* car;
    float overallSpeed=0;

};
#endif