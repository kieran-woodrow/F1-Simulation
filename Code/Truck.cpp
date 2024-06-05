#include "Truck.h"

Truck::Truck(){
	type="Truck";
}

Truck::~Truck(){}

void Truck::addEquipment(Equipment *e){
	equipment.push_back(e);
}

vector<Equipment*> Truck::getEquipment(){
	return equipment;
}

Truck* Truck::clone(){
	return new Truck(*this);
}