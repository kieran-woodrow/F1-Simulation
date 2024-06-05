#ifndef SHIPFACTORY_H
#define SHIPFACTORY_H
#include "TransportFactory.h"
#include "Ship.h"

class ShipFactory : public TransportFactory{
public:
	ShipFactory();
	~ShipFactory();
	Transport* createTransport();
};
#endif