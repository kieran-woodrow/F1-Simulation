#ifndef CHASSIS_H
#define CHASSIS_H
#include "Department.h"

class Chassis:public Department{
    public:
        Chassis(Car* c, Container* con);
        void addPart(string p);
        void print();
    private:
        Container* container;
};
#endif