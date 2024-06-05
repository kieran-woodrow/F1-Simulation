#ifndef NORTHAMERICAFACTORY_H
#define NORTHAMERICAFACTORY_H
#include "ContinentFactory.h"
#include "NorthAmerica.h"

class NorthAmericaFactory: public ContinentFactory{
public:
	NorthAmericaFactory();
	~NorthAmericaFactory();
	Continent* createContinent(TrackBuilder* t);
};

#endif