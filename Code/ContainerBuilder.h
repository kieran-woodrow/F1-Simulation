#ifndef CONTAINERBUILDER_H
#define CONTAINERBUILDER_H

#include <iostream>
#include <string>

using namespace std;

class ContainerBuilder
{
	public:
        virtual void reset()=0;
        virtual void setName()=0;
        virtual void setWeight()=0;
        virtual string getName()=0;
};

#endif