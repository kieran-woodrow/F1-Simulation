#include "CarPartMaker.h"
#include <ctime>
#include <sstream>
#include <cstdlib>

CarPartMaker::CarPartMaker(string n)
{
    
    reset();
    name=n;
   // rand();
    
    setType();
    carPart->setID(type);
    setWeight();
    setName();
    setQuality();
    setDurability();
    setEffiency();

    //srand(time(NULL));
}

void CarPartMaker::reset()
{
    carPart= new CarPart();
    weight=0;
    name="";
    durability=0;
    quality=0;
    efficiency=0;
    
}

void CarPartMaker::setType()
{
    //nt num=rand() % 2;

    //cout<<num<<endl;

    type= "Car Part";
   
    
}

void CarPartMaker::setName()
{
    /*string conversion;

    stringstream ss;

    ss<<weight;
    ss>>conversion;*/

    
    /*string hold=name;
    name= type+"-"+carPart->getID()+" : "+hold;*/
   
    carPart->setName(name);
    
}

string CarPartMaker::getName()
{
   
    return name;
}

void CarPartMaker::setWeight()
{
   
    weight= (rand() % 1000) + 1;
    carPart->setWeight(weight);
    
}

void CarPartMaker::setDurability()
{
   
    durability= 10;
    carPart->setDurability(durability);
    
}

void CarPartMaker::setQuality()
{
   
    quality= (rand() % 100) + 1;
    carPart->setQuality(quality);
    
}

void CarPartMaker::setEffiency()
{
   
    efficiency= (rand() % 60) + 40;
    carPart->setEffiency(efficiency);
    
}


CarPart* CarPartMaker::getCarPart()
{
    return carPart;
}