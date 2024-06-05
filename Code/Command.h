#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>

using namespace std;

class Command
{
	public:

    virtual bool execute() =0;
    
};

#endif