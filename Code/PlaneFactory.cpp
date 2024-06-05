#include "PlaneFactory.h"

PlaneFactory::PlaneFactory(){}

PlaneFactory::~PlaneFactory(){}

Transport* PlaneFactory::createTransport(){
	return new Plane();
}