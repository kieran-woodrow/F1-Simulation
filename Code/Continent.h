#ifndef CONTINENT_H
#define CONTINENT_H
#include "Transport.h"
#include <iostream>
#include <string>
using namespace std;

class Continent{
public:
	Continent(){};
	virtual bool isEuropean()=0;
	virtual string getcountryName()=0;
	virtual ~Continent(){};
	void addTransport(Transport*);
	virtual void construct()=0;
	virtual void setCountryName(string name)=0;
private:
	vector<vector<Equipment*> > equipment;
	vector<vector<Container*> > container;
	vector<Car*> car;
	Transport* transport;
};

#endif