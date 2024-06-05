#include "Continent.h" 

void Continent::addTransport(Transport* t){
	if(t->getType() == "Truck"){
		equipment.push_back(t->getEquipment());
	}
	else if(t->getType() == "Plane"){
		car.push_back(t->getCar());
	}
	else{
		container.push_back(t->getContainer());
	}
}