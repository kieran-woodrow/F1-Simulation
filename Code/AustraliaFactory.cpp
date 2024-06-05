#include "AustraliaFactory.h"

AustraliaFactory::AustraliaFactory(){}

AustraliaFactory::~AustraliaFactory(){}

Continent* AustraliaFactory::createContinent(TrackBuilder* t){
	return new Australia(t);
} 
