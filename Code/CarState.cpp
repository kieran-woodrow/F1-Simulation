#include "CarState.h"
CarState::CarState(string carName, string season,vector<CarPart*> parts)
{

	this->carName=carName;
	this->season=season;  
	this->parts=parts;

}

string CarState::getSeason()
{

	return this->season;

}

string CarState::getCarName()
{

	return this->carName;

}

vector<CarPart*> CarState::getParts()
{

	return this->parts;

}
