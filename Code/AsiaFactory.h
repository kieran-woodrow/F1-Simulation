#ifndef ASIAFACTORY_H
#define ASIAFACTORY_H
#include "ContinentFactory.h"
#include "Asia.h"

class AsiaFactory: public ContinentFactory{
public:
	AsiaFactory();
	~AsiaFactory();
	Continent* createContinent(TrackBuilder* t);
};

#endif
