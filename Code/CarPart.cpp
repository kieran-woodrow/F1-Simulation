#include "CarPart.h"
#include <sstream>

CarPart::CarPart()
{
    name="";
    weight=0;
    ID="";
    //srand((unsigned) time(0));
}

void CarPart::setName(string n)
{
    name=n;
}

string CarPart::getName()
{
    return name;
}

void CarPart::setID(string t)
{
    int random= (rand() % 100000) + 1;

    ID= t;
    stringstream ss;
    string hold;
    ss<<random;
    ss>>hold;
    ID+="-"+hold;

}

string CarPart::getID()
{
    return ID;
}
void CarPart::setWeight(int w)
{
    weight=w;
}

int CarPart::getWeight()
{
    return weight;
}

void CarPart::setDurability(int d)
{
    durability=d;
}

int CarPart::getDurability()
{
    return durability;
}

void CarPart::setQuality(int q)
{
    quality=q;
}

int CarPart::getQuality()
{
    return quality;
}

void CarPart::setEffiency(int e)
{
    efficiency=e;
}

int CarPart::getEfficiency()
{
    return efficiency;
}


void CarPart::print(){
    cout<<"Car Part Details"<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Weight: "<<weight<<endl;
    cout<<"Durability: "<<durability<<endl;
    cout<<"Quality: "<<quality<<endl;
    cout<<"Efficiency: "<<efficiency<<endl;
}