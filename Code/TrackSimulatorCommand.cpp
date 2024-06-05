#include "TrackSimulatorCommand.h"

TrackSimulatorCommand::TrackSimulatorCommand(int num, Track* t)
{
    ts= new TrackSimulation();
    experience=num;
    track=t;
    
}

bool TrackSimulatorCommand::execute()
{
    return ts->runTrackSimulation(experience, track);
}

