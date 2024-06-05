#ifndef CARPARTSIMULATION_H
#define CARPARTSIMULATION_H
#include "CarPart.h"
#include <iostream>
#include <string>

using namespace std;

class CarPartSimulation
{
	public:

    bool runCarPartCheck(CarPart* cp, CarPart* old);
       
};

#endif