
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
#include "Car.h"
#include "CarPartSimulatorCommand.h"
#include "Container.h"

using namespace std;

class Department{

    public:
    Department();
    Department(string name,Car* c, Container* con);
    string getName();
    void setName(string n);
    Car* getComponent();
    void setCar(Car* c);
    void printName();
    virtual void addPart(string p);
    virtual void print();
    ~Department();
    void delet();
    bool runSimulation(CarPart* cp, CarPart* old);

    private:
    string name;
    Car* car;
    Command* command;
    Container* container;


};
#endif