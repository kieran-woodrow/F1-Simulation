#ifndef CARPARTMAKER_H
#define CARPARTMAKER_H

#include <iostream>
#include <string>
#include "ContainerBuilder.h"
#include "CarPart.h"

using namespace std;

class CarPartMaker: public ContainerBuilder
{
    private:
        CarPart* carPart;
        string type;
        string name;
        int weight;
        int durability;
        int quality;
        int efficiency;

	public:

        CarPartMaker(string n);
        void reset();
        void setType();
        void setName();
        void setWeight();
        void setDurability();
        void setQuality();
        void setEffiency();
        string getName();
        CarPart* getCarPart();
};

#endif