#ifndef PLANE_H
#define PLANE_H
#include "Transport.h"
#include "Car.h"

class Plane : public Transport{
public:
	Plane();
	~Plane();
	void addCar(Car*);
	Car* getCar();
	virtual Plane* clone();
};
#endif