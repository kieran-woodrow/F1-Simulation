#ifndef DRIVER_H
#define DRIVER_H

#include "Track.h"
#include "TrackSimulatorCommand.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Driver
{
	public:
    Driver(){};
    Driver(string n);

    string getName();
    void setAge();
    int getAge();
    void setExperience();
    string getExperience();
    void addTrack(Track* t);
    Track* getTrack(string t);
    void runSimulation(Track* t);
    string getTrackExperience(string t);
    int getNumTimesDrivenOnTrack(string t);
    void printDriverInfo();
    virtual void print();
    void setTotalPoints(int a);
    int  getTotalPoints();
   
    
    private:
    
    string name;
    int age;
    string experience;
    vector<string> tracks;
    vector<string> uniquetracks;
    Command* command;
    int totalPoints;
    
};

#endif