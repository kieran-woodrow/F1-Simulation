#ifndef TRUCKFACTORY_H
#define TRUCKFACTORY_H
#include "TransportFactory.h"
#include "Truck.h"

class TruckFactory: public TransportFactory{
public:
 	TruckFactory();
 	~TruckFactory();
 	Transport* createTransport();
}; 
#endif