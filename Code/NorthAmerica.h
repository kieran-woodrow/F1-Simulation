#ifndef NORTHAMERICA_H
#define NORTHAMERICA_H
#include "TrackBuilder.h"
#include "Continent.h"

class NorthAmerica: public Continent{
    public:
    NorthAmerica(TrackBuilder* t);
    virtual ~NorthAmerica();
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
