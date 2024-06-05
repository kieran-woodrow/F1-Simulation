#include "Plane.h"

Plane::Plane(){
	type="Plane";
}

Plane::~Plane(){}

void Plane::addCar(Car* c){

	car=c;
	cout << "\033[1;33m";
	cout<<"Loading F1 Car "<<car->getCarName()<<" onto the plane"<<endl;
	cout << "\033[1;37m";
}
Car* Plane::getCar(){
	return car;
}
Plane* Plane::clone(){
	return new Plane(*this);
}