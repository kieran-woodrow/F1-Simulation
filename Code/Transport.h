#ifndef TRANSPORT_H
#define TRANSPORT_H
#include "TransportMemento.h"
#include <sstream>
#include <iostream>
using namespace std;


class Transport{
public:
 	Transport();
 	virtual ~Transport();
 	string getType();
 	virtual vector<Equipment*> getEquipment();
 	virtual Car* getCar();
 	virtual vector<Container*> getContainer();
 	virtual Transport* clone()=0;
 	TransportMemento* createMemento();
 	void restoreMemento(TransportMemento*);
protected:
	string type;
	vector<Equipment*> equipment;
	vector<Container*> container;
	Car* car;
}; 
#endif