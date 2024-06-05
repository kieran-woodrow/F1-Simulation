#ifndef STOREDCAR_H
#define STOREDCAR_H

//memento
#include "CarState.h"


class StoredCar{
   
    public:
    StoredCar(string CarName,string season,vector<CarPart*> parts);
    CarState* getCarState();
    virtual ~StoredCar();
    private:
    CarState* state;

};
#endif
