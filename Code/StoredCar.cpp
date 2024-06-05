#include "StoredCar.h"
StoredCar::StoredCar(string CarName,string season,vector<CarPart*> parts)
{
    state=new CarState(CarName,season,parts);
}


CarState* StoredCar::getCarState()
{
return state;
}



StoredCar::~StoredCar()
{
delete state;
}


