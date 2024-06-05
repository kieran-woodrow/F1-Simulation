#include "TruckFactory.h" 

TruckFactory::TruckFactory(){}

TruckFactory::~TruckFactory(){}

Transport* TruckFactory::createTransport(){
	return new Truck();
}