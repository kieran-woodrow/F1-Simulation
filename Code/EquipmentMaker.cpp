#include "EquipmentMaker.h"
#include <ctime>
#include <sstream>
#include <cstdlib>

EquipmentMaker::EquipmentMaker(string n, string t)
{
    reset();
    name=n;
    equipment->setID();
    setType(t);
    setWeight();
    setName();
    //srand(time(NULL));
}

void EquipmentMaker::reset()
{
    equipment= new Equipment();
    weight=0;
    name="";
    
}

void EquipmentMaker::setType(string t)
{
    //int num=rand() % 2;

    //cout<<num<<endl;

    if(t=="Catering")
    {
        type="Catering_Equipment";
    }
    else if(t=="Garage")
    {
        type="Garage_Equipment";
    }
   
    
}

void EquipmentMaker::setName()
{
    /*string conversion;

    stringstream ss;

    ss<<weight;
    ss>>conversion;*/

    

    name= type+"-"+equipment->getID()+" : "+name;
   
    equipment->setName(name);
    
}

string EquipmentMaker::getName()
{
   
    return name;
}

void EquipmentMaker::setWeight()
{
   
    weight= (rand() % 1000) + 1;
    equipment->setWeight(weight);
    
   
    
}


Equipment* EquipmentMaker::getEquipment()
{
    return equipment;
}