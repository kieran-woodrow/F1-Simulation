#ifndef SHIP_H
#define SHIP_H
#include "Transport.h"
#include "Container.h"

class Ship : public Transport{
public:
	Ship();
	~Ship();
	void addContainer(Container*);
 	vector<Container*> getContainer();
 	virtual Ship* clone();
};
#endif