#if !defined(RACE_H)
#define RACE_H

#include <iostream>
#include "Track.h"
class State;
#include "softTyreCompound.h"
#include "Competitors.h"

using namespace std;

class Race {
	public:
		Race();
		Race(Competitors* c);
		~Race();
		void change();
		string getCurrentCompound();
		void setState(State* state);
		void setTrack(Track* t);
		Track* getTrack();
		void StartRacing();
		void setCompetitors(Competitors* c);
		float* getRandomRacingTimesForCars();
	private: 
		State* state;
		Track* trackName;
		Competitors* comp;
};

#endif 