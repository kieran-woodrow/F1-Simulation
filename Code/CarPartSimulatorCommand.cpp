#include "CarPartSimulatorCommand.h"

CarPartSimulatorCommand::CarPartSimulatorCommand(CarPart* cp, CarPart* old)
{
    cps= new CarPartSimulation();
    carpart=cp;
    oldcarpart=old;
}

bool CarPartSimulatorCommand::execute()
{
    return cps->runCarPartCheck(carpart, oldcarpart);
}