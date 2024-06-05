#ifndef AUSTRALIAFACTORY_H
#define AUSTRALIAFACTORY_H
#include "ContinentFactory.h"
#include "Australia.h"

class AustraliaFactory: public ContinentFactory{
public:
	AustraliaFactory();
	~AustraliaFactory();
	Continent* createContinent(TrackBuilder* t);	
};

#endif