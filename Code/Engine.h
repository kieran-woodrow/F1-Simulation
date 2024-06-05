#ifndef ENGINE_H
#define ENGINE_H
#include "Department.h"
class Engine:public Department{
    public:
        Engine(Car* c, Container* con);
        void addPart(string p);
        void print();
    private:
        Container* container;
};
#endif