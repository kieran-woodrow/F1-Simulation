#ifndef TRACK_H
#define TRACK_H

#include <stdlib.h>
#include <map>
#include <iostream>
#include <string>
#include "TrackD.h"
using namespace std;

class Track: public TrackD {
    public:
        Track();

        void set();

        void setInfo(string key, string value);

        void setPart(string part[2][2], int coord[2]);

        Track* getTrack();

        string getInfo(string key);

        void showTrackMap();

        void addTurn();
        
        void addStraight();

        int getTurnDistance(){ return totalTurn; };
        int getStraightDistance(){ return totalStr; };
        int getTotalDistance(){ return totalTurn+totalStr; };
        virtual void printT();
        virtual void add(TrackD*);
        virtual void remove();
        bool getCommunication();
        void setCommunication(bool);
        void createDirections(vector<string> v){
            directions = v;
        }
    private:
        map<string, string> info;
        string parts[20][40];
        int totalTurn = 0;
        int totalStr = 0;
        vector<TrackD*> trackD;
        bool communication;
        vector<string> directions;
};

#endif