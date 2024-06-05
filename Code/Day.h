#ifndef DAY_H
#define DAY_H

#include <iostream>
#include <stdlib.h>
#include "ComputerSimulations.h"
#include "WindTunnel.h"
#include "Competitors.h"
#include "Race.h"

using namespace std;

class Day{

    public:
        Day(){};
        Day(Day* s): successor(s){};
        virtual void handle(string day, Car* cars);
        void setSuccessor(Day* s){
            successor = s;
        }
        void setRace(Race* r){
            this->r=r;
        }

        Race* getRace()
        {
            return r;
        }

    

    private:
        Day* successor;
        Race* r;
        

};

#endif