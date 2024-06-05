#ifndef AFRICAFACTORY_H
#define AFRICAFACTORY_H
#include "ContinentFactory.h"
#include "Africa.h"

class AfricaFactory: public ContinentFactory{
public:
 	AfricaFactory();
 	~AfricaFactory();
 	Continent* createContinent(TrackBuilder* t);
}; 

#endif