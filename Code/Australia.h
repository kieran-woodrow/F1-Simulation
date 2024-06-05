#ifndef AUSTRALIA_H
#define AUSTRALIA_H
#include "TrackBuilder.h"
#include "Continent.h"

class Australia: public Continent{
    
    public:
    Australia(TrackBuilder* t);
    
    virtual ~Australia();
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
