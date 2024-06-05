
#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H
#include "Department.h"


class Aerodynamics:public Department{
    public:
        Aerodynamics(Car* c, Container *con);
        void addPart(string p);
        void print();
    private:
        Container* container;
};
#endif