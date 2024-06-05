#ifndef CONTINENTFACTORY_H
#define CONTINENTFACTORY_H
#include "Continent.h"
#include "TrackBuilder.h"
class ContinentFactory{
public:
	ContinentFactory(){};
	virtual ~ContinentFactory(){};
	virtual Continent* createContinent(TrackBuilder* t)=0;
};

#endif