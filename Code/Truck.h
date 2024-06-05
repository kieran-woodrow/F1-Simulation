#ifndef TRUCK_H
#define TRUCK_H
#include "Transport.h"

class Truck: public Transport{
public:
 	Truck();
 	~Truck();
 	void addEquipment(Equipment*);
 	vector<Equipment*> getEquipment();
 	virtual Truck* clone();
}; 
#endif