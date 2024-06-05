#ifndef ASIA_H
#define ASIA_H
#include "TrackBuilder.h"
#include "Continent.h"

class Asia: public Continent{
    
    public:
    Asia(TrackBuilder* t);
    virtual ~Asia();
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