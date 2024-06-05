#ifndef TRACKBUILDER_H
#define TRACKBUILDER_H
#include <string>
#include <vector>
using namespace std;
class TrackBuilder{
public:
		TrackBuilder(){};
		virtual ~TrackBuilder(){};
		virtual void setState(string s) = 0;
		virtual void createTopRightCorner(int coords[2]) = 0;
		virtual void createTopLeftCorner(int coords[2])=0;
        virtual void createBottomRightCorner(int coords[2]) = 0;
		virtual void createBottomLeftCorner(int coords[2])=0;
        virtual void createStraight(int coords[2])=0;
		virtual void setNameTrack(string s) {};
		virtual void createDirections(vector<string> v) = 0;

	private:
};
#endif