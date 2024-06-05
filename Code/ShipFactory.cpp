#include "ShipFactory.h"

ShipFactory::ShipFactory(){}

ShipFactory::~ShipFactory(){}

Transport* ShipFactory::createTransport(){
	return new Ship();
} 
