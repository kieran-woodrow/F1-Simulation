#ifndef AFRICA_H
#define AFRICA_H
#include "TrackBuilder.h"
#include "Continent.h"

class Africa: public Continent{

    
    public:
    Africa(TrackBuilder* t);
    virtual ~Africa();
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