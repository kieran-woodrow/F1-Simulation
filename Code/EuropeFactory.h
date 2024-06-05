#ifndef EUROPEFACTORY_H
#define EUROPEFACTORY_H
#include "ContinentFactory.h"
#include "Europe.h"

class EuropeFactory: public ContinentFactory{
 public:
 	EuropeFactory();
 	~EuropeFactory();
 	Continent* createContinent(TrackBuilder* t);
}; 

#endif