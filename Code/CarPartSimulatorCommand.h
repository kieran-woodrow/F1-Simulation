#ifndef CARPARTSIMULATORCOMMAND_H
#define CARPARTSIMULATORCOMMAND_H
#include "CarPartSimulation.h"
#include "CarPart.h"
#include "Command.h"
#include <iostream>
#include <string>

using namespace std;

class CarPartSimulatorCommand: public Command
{
	public:

    CarPartSimulatorCommand(CarPart* cp, CarPart* old);
    bool execute();
    
    private:
    
    CarPartSimulation* cps;
    CarPart* carpart;
    CarPart* oldcarpart;
};

#endif