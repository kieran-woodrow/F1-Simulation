#ifndef WEEKEND_H
#define WEEKEND_H

#include "FridayMorning.h"
#include "SaturdayMorning.h"
#include "SaturdayAfternoon.h"
#include "Sunday.h"

class Weekend{

    public:
        Weekend(vector<Car*> c, Track* t){
            
            fm = new FridayMorning();
            Day *satm = new SaturdayMorning();
            Day *sata = new SaturdayAfternoon();
            sun = new Sunday();

            fm->setSuccessor(satm);
            ((FridayMorning*)fm)->setTrack(t);
            satm->setSuccessor(sata);
            sata->setSuccessor(sun);

            Car* car = new Car();
            tunnel = new WindTunnel(car);
            comp=new Competitors(c);

            ((SaturdayMorning*)satm)->setTunnel(tunnel);
            ((SaturdayAfternoon*)sata)->setCompetitors(comp);
            ((Sunday*)sun)->setCompetitors(comp);
            
            
        }

        Day* get(){
            return fm;
        }
        Competitors* getCompetitors(){
            return comp;
        }
        void setCompetitors(Competitors* c){
            comp=c;
        }
        void setRace(Race* r){
            this->r=r;
            ((Sunday*)sun)->setRace(r);

        }
        Race* getRace(){
            return r;
        }

       

    private:
        Day *fm;
        Testing* tunnel;
        Competitors* comp;
        Race* r;
        Day *sun;
        
};


#endif
