#include "NorthAmericaFactory.h"

NorthAmericaFactory::NorthAmericaFactory(){}

NorthAmericaFactory::~NorthAmericaFactory(){}

Continent* NorthAmericaFactory::createContinent(TrackBuilder* t){
	return new NorthAmerica(t);
}