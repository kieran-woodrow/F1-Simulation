#include "Ship.h"

Ship::Ship(){
	type="Ship";
} 

Ship::~Ship(){}

void Ship::addContainer(Container *c){
	container.push_back(c);
	cout << "\033[1;33m";
	cout<<"Placing "<<c->getContainerName()<<" with ID: "<<c->getContainerID()<<" onto the ship"<<endl;
	cout << "\033[1;37m";
}

vector<Container*> Ship::getContainer(){
	return container;
}

Ship* Ship::clone(){
	return new Ship(*this);
}