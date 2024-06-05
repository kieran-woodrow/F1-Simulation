#ifndef EQUIPMENTMAKER_H
#define EQUIPMENTMAKER_H

#include <iostream>
#include <string>
#include "ContainerBuilder.h"
#include "Equipment.h"

using namespace std;

class EquipmentMaker: public ContainerBuilder
{
    private:
       Equipment* equipment;
       string type;
       string name;
       int weight;

	public:

        EquipmentMaker(string n, string t);
        void reset();
        void setType(string t);
        void setName();
        void setWeight();
        string getName();
        Equipment* getEquipment();
};

#endif