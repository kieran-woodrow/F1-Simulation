#ifndef SATURDAYAFTERNOON_H
#define SATURDAYAFTERNOON_H

#include "Day.h"

class SaturdayAfternoon : public Day{

    public:
        SaturdayAfternoon(){};
        void handle(string day, Car* car){

            this->car = car;
            if (day == this->day) handle(todaysEvent(), car);
            else Day::handle(day, car);

        }

        string todaysEvent(){
            
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\033[1;33m";
            cout << " < EVENT >  S a t u r d a y  A f t e r n o o n\n";
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "\033[1;34m";
            cout << "Qualifiers\n";
            cout << "\033[1;37m";


            comp->qualify();
            return "sun";
        }
        void setCompetitors(Competitors* c){
            comp=c;
        }

    private:
        string day = "sata";
        Car* car;
        Competitors* comp;
};

#endif