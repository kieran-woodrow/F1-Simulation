#include "Transport.h"

Transport::Transport(){}

Transport::~Transport(){}

string Transport::getType(){
	return type;
}

TransportMemento* Transport::createMemento(){
	return new TransportMemento(type,car,equipment,container);
}

void Transport::restoreMemento(TransportMemento* m){
	type=m->getType();
	car=m->getCar();
	equipment=m->getEquipment();
	container=m->getContainer();
}

vector<Equipment*> Transport::getEquipment(){
	return equipment;
}

Car* Transport::getCar(){
	return car;
}

vector<Container*> Transport::getContainer(){
	return container;
}