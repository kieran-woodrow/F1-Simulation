#include "AfricaFactory.h"

AfricaFactory::AfricaFactory(){}

AfricaFactory::~AfricaFactory(){}

Continent* AfricaFactory::createContinent(TrackBuilder* t){
	return new Africa(t);
}