#ifndef TRACKMAKER_H
#define TRACKMAKER_H
#include "TrackBuilder.h"
#include "Track.h"
class TrackMaker : public TrackBuilder{

public: 
        TrackMaker();
        void setState(string s);

		void createTopRightCorner(int coords[2]);
        void createBottomRightCorner(int coords[2]);
        void createTopLeftCorner(int coords[2]);
         void createBottomLeftCorner(int coords[2]);
         void createStraight(int coords[2]);

		void setNameTrack(string name);
        
		void createDirections(vector<string> v){track.createDirections(v); };

		Track getTrack();

    private:
    Track track;
};
#endif