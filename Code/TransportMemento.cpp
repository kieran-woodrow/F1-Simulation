#include "TransportMemento.h"

TransportMemento::TransportMemento(string t, Car* c, vector<Equipment*> e, vector<Container*> co){
	type=t;
	equipment=e;
	container=co;
	car=c;
}

TransportMemento::~TransportMemento(){}

string TransportMemento::getType(){
	return type;
}
vector<Equipment*> TransportMemento::getEquipment(){
	return equipment;
}
vector<Container*> TransportMemento::getContainer(){
	return container;
}
Car* TransportMemento::getCar(){
	return car;
}