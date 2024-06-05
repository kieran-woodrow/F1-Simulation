#include "Car.h"

Car::Car(){}
Car::Car(string name)
{

	//cout << "Car created" << endl;
	carName=name;

}

Car::Car(string CarName,string season)
{
	//cout << "Car Created." << endl;
	this->setSeason(season);
	this->setCarName(CarName);
}


Car::~Car()
{

	cout << "Car Destroyed." << endl;
}


void Car::addPart(CarPart* p)
{

parts.push_back(p);

}

CarPart* Car::getCarPart(string p)
{
	for(int i=0;i<parts.size();i++)
	{
		if(p==parts.at(i)->getName()){
			return parts.at(i);
		}
	}

	return NULL;
}

void Car::removePart(string p)
{

	for(int i=0;i<parts.size();i++)
	{
		if(p==parts[i]->getName())
		{
			parts.erase(parts.begin()+i);
			cout << "\033[1;30m";
			cout<<p<<" was removed from "<<this->getCarName()<<endl;
		}
	}

}



string Car::getCarName()
{

return carName;

}

void Car::setCarName(string carName)
{

this->carName=carName;

}

void Car::setSeason(string season)
{

this->season=season;

}

string Car::getSeason()
{

return season;

}

void Car::setParts(vector<CarPart*> parts)
{

this->parts=parts;

}

vector<CarPart*> Car::getParts()
{

return parts;

}



void Car::printSpecs()
{
cout << "\033[1;36m";
cout << carName << " specs: \n";
cout << "\033[1;34m";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout << "\033[1;33m";

int g =0;
for (auto i = parts.begin(); i != parts.end(); i++){
	g++;
	if (g == 2) g = 0;

	if (g == 0) cout << "\033[1;30m";
	if (g == 1) cout << "\033[1;37m";
	cout << (*i)->getName() << "\n";
}
cout << "\033[1;34m";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout << "\033[1;37m";
cout<<endl;

}

StoredCar* Car::makeMemento()
{
cout << "\033[1;37m";
cout<<"The cars state and parts have been inspected and logged for later restoration purposes."<<endl;
cout<<endl;
cout << "\033[1;37m";
StoredCar* s=new StoredCar(carName,season,parts);
return s;

}

void Car::redoMemento(StoredCar* memento)
{

	cout<<endl;
	this->carName=memento->getCarState()->getCarName();
	this->season=memento->getCarState()->getSeason();
	this->parts=memento->getCarState()->getParts();

	for(int k=0; k<parts.size(); k++)
	{
		parts.at(k)->setDurability(10);
	}

}

void Car::addDriver(Driver* d)
{
	driver=d;
}

Driver* Car::getDriver()
{
	return driver;
}

void Car::printCarInfo()
{
	cout << "\033[1;34m";
	cout<<getCarName()<<" Info:"<<endl;
	cout << "\033[1;36m";
	cout<<endl;
	cout<<"Driver: "<<driver->getName()<<endl;
	cout<<"Season: "<<getSeason()<<endl;
	cout<<endl;
	cout << "\033[1;37m";
}

int Car::getPositionStart(){
	return positionStart;
}
void Car::setPositionStart(int a){
	positionStart=a;
}

int Car::getPlacement(){
	return PlaceMent;
}
void Car::setPlaceMent(int a){
	PlaceMent=a;
}

void Car::addTotalPoints(int a){
	totalPoints+=a;
	driver->setTotalPoints(totalPoints);
}
int Car::getTotalPoints(){
	return totalPoints;
}