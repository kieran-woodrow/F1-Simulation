#include "Equipment.h"
#include <sstream>

Equipment::Equipment()
{
    name="";
    weight=0;
    ID="";
    
}

void Equipment::setName(string n)
{
    name=n;
}

string Equipment::getName()
{
    return name;
}

void Equipment::setID()
{
    int random= (rand() % 100000) + 1;

    stringstream ss;

    ss<<random;
    ss>>ID;
}

string Equipment::getID()
{
    return ID;
}

void Equipment::setWeight(int w)
{
    weight=w;
}

int Equipment::getWeight()
{
    return weight;
}

void Equipment::print(){

    cout<<"Equipment Details"<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Weight: "<<weight<<endl;
}