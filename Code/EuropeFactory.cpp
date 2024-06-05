#include "EuropeFactory.h"

EuropeFactory::EuropeFactory(){}

EuropeFactory::~EuropeFactory(){}

Continent* EuropeFactory::createContinent(TrackBuilder* t){
	return new Europe(t);
}