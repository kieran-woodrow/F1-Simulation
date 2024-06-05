#ifndef TRANSPORTFACTORY_H
#define TRANSPORTFACTORY_H
#include "Transport.h"

class TransportFactory{
public:
 	TransportFactory(){};
 	virtual ~TransportFactory(){};
 	virtual Transport* createTransport()=0;
};
#endif
