#ifndef EUROPE_H
#define EUROPE_H
#include "TrackBuilder.h"
#include "Continent.h"

class Europe: public Continent{
    
    public:
    Europe(TrackBuilder* t);
    virtual ~Europe();
    void construct();
    void setTrackBuilder(TrackBuilder* builder);
    bool isEuropean();
	void setCountryName(string name);
	string getcountryName();

    private:
    TrackBuilder* trackbuilder;
    string name;
};
#endif
