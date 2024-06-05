#ifndef TRANSPORTMEMENTO_H
#define TRANSPORTMEMENTO_H
#include <vector>
#include "Equipment.h"
#include "Container.h"
#include "Car.h"

class TransportMemento
{
public:
 	TransportMemento(string t, Car* c, vector<Equipment*> e, vector<Container*> co);
 	~TransportMemento();
 	string getType();
 	vector<Equipment*> getEquipment();
 	vector<Container*> getContainer();
 	Car* getCar();

private:
 	string type;
	vector<Equipment*> equipment;
	vector<Container*> container;
	Car* car;
}; 
 #endif
