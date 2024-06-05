#include "AsiaFactory.h"

AsiaFactory::AsiaFactory(){}

AsiaFactory::~AsiaFactory(){}

Continent* AsiaFactory::createContinent(TrackBuilder* t){
	return new Asia(t);
}