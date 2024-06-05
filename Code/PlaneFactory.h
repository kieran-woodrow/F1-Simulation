#ifndef PLANEFACTORY_H
#define PLANEFACTORY_H
#include "TransportFactory.h"
#include "Plane.h" 

class PlaneFactory : public TransportFactory{
public:
	PlaneFactory();
	~PlaneFactory();
	Transport* createTransport();
};
#endif