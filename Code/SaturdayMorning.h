#ifndef SATURDAYMORNING_H
#define SATURDAYMORNING_H

#include "Day.h"


class SaturdayMorning : public Day{

    public:
        SaturdayMorning(){};

        void handle(string day, Car* car){
            this->car = car;
            if (day == this->day) handle(todaysEvent(), car);
            else Day::handle(day, car);

        }

        

        string todaysEvent(){
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\033[1;33m";
            cout << " < EVENT >  S a t u r d a y  M o r n i n g\n";
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "\033[1;34m";
            cout << "Wind Tunnel Testing:\n";
            cout << "\033[1;37m";
            
            tunnel->setCar(car);
            tunnel->StartTesting();




            return "sata";
        }

        void setTunnel(Testing* t){
            tunnel = t;
        }

    private:
        string day = "satm";
        Car* car;
        Testing* tunnel;
};

#endif