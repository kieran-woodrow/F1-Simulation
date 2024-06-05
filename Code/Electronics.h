
#ifndef ELECTRONICS_H
#define ELECTRONICS_H
#include "Department.h"

class Electronics:public Department{
    public:
        Electronics(Car* c, Container* con);
        void addPart(string p);
        void print();
    private:
        Container* container;
};
#endif