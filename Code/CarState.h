#ifndef CARSTATE_H
#define CARSTATE_H
#include "CarPart.h"
#include <string>
#include <vector>

using namespace std;

class CarState{

    public:
        CarState(string carName, string season,vector<CarPart*> parts);
        string getSeason();
        string getCarName();
        vector<CarPart*> getParts();
    private:
        string carName;
        string season;
        vector<CarPart*> parts;

};
#endif