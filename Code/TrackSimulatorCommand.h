#ifndef TRACKSIMULATORCOMMAND_H
#define TRACKSIMULATORCOMMAND_H
#include "TrackSimulation.h"
#include "Track.h"
#include "Command.h"

#include <iostream>
#include <string>

using namespace std;

class TrackSimulatorCommand: public Command
{
	public:

    TrackSimulatorCommand(int num, Track* t);
    bool execute();
    
    private:
    TrackSimulation* ts;
    Track* track;
 
    int experience;
    
};

#endif