#ifndef FRIDAYMORNING_H
#define FRIDAYMORNING_H

#include "Day.h"
#include "Straight.h"
#include "Turn.h"
#include "Curve.h"
#include "TurnLR.h"
#include "MoveStraight.h"
#include "CurveLR.h"
#include "Barrier.h"
#include "GravelTrap.h"
#include "Pitstop.h"
#include "Startline.h"
#include "ContextStrategy.h"
#include <fstream>

class FridayMorning : public Day{

    public:
        FridayMorning(){};
        void handle(string day, Car* car){
            this->car = car;

            if (day == this->day) handle(todaysEvent(), car);
            else Day::handle(day, car);

        }

        string todaysEvent(){

            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\033[1;33m";
            cout << " < EVENT >  F r i d a y\n";
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "\033[1;34m";
            cout << "Computer Simulation Testing:\n";
            cout << "\033[1;37m";
            
            
            Testing* t = new ComputerSimulations(car);
            t->StartTesting();

            Driver* driver= car->getDriver();
            //Track *track= Day::getRace()->getTrack();
            driver->runSimulation(track);

            cout << "\033[1;33m";
            cout<<"Strategist giving instructions to the driver about which turns to take on the track."<<endl;
            cout<<endl;
            cout << "\033[1;34m";
            cout<<"Directions\t\t"<<"Landmark"<<endl;
            cout<<endl;
            cout << "\033[1;36m";
            
            TrackD** leaf=new TrackD*[5];
            leaf[0]=new Straight();
            leaf[1]=new Turn(0);
            leaf[2]=new Turn(90);
            leaf[3]=new Curve(0);
            leaf[4]=new Curve(90);

            
            Barrier* barrier=new Barrier();
            Barrier* barrier1=new Barrier();
            Barrier* barrier2=new Barrier();
            GravelTrap* gravelTrap=new GravelTrap();
            GravelTrap* gravelTrap1=new GravelTrap();
            GravelTrap* gravelTrap2=new GravelTrap();
            Pitstop* pitstop=new Pitstop();
            Startline* startline=new Startline();
            Decorator* decoractor0=new Decorator();
            Decorator* decoractor1=new Decorator();
            Decorator* decoractor2=new Decorator();
            
        
            int index=0;
            string name="decision.txt";
            ifstream file;
            file.open(name.c_str());
            string line;

            Strategists* strategy=new ConcreteStrategists();
            while(!file.eof()){
                getline(file, line);
                strategy->addDecition(line);
                index++;
            }
            file.close();
            ContextStrategy* contextstrategy=new ContextStrategy(strategy);

            int* arr=new int[index];
           
            for (int i = 0; i < index; i++)
            {

                if(contextstrategy->getDecition()=="Straight"){
                   
                    car->decision= new Straight();
                    Driver* driver2= new MoveStraight(car);
                    Strategists* strategist=new Strategists(driver2);
                    strategist->execute();
                    arr[i]=0;
                }
                else if(contextstrategy->getDecition()=="LeftTurn"){
                  
                    car->decision= new Turn(90);
                    Driver* driver2= new TurnLR(car);
                    Strategists* strategist=new Strategists(driver2);
                    strategist->execute();
                    arr[i]=1;
                }
                else if(contextstrategy->getDecition()=="Rightturn"){
                     
                    car->decision= new Turn(0);
                    Driver* driver2= new TurnLR(car);
                    Strategists* strategist=new Strategists(driver2);
                    strategist->execute();
                    arr[i]=2;
                }
                else if(contextstrategy->getDecition()=="CurveRight"){
            
                    car->decision= new Curve(0);
                    Driver* driver2= new CurveLR(car);
                    Strategists* strategist=new Strategists(driver2);
                    strategist->execute();
                    arr[i]=3;
                }
                else{
        
                    car->decision= new Curve(10);
                    Driver* driver2= new CurveLR(car);
                    Strategists* strategist=new Strategists(driver2);
                    strategist->execute();
                    arr[i]=4;
                }
            }

            for(int i=0; i<index; i++){
                if(i==0){
                    startline->add(leaf[arr[i]]);
                }
                else if(i==1){
                    barrier->add(leaf[arr[i]]);
                }
                else if(i==2){
                    decoractor0->add(leaf[arr[i]]);
                }
                else if(i==3){
                    decoractor1->add(leaf[arr[i]]);
                }
                else if(i==4){
                    gravelTrap->add(leaf[arr[i]]);
                }
                else if(i==5){
                    barrier1->add(leaf[arr[i]]);
                }
                else if(i==6){
                    barrier2->add(leaf[arr[i]]);
                }
                else if(i==7){
                    pitstop->add(leaf[arr[i]]);
                }
                else if(i==8){
                    decoractor2->add(leaf[arr[i]]);
                }
                else if(i==9){
                    gravelTrap1->add(leaf[arr[i]]);
                }
                else{
                    gravelTrap2->add(leaf[arr[i]]);
                }
            }

            track->add(startline);
            track->add(barrier);
            track->add(decoractor0);
            track->add(decoractor1);
            track->add(gravelTrap);
            track->add(barrier1);
            track->add(barrier2);
            track->add(pitstop);
            track->add(decoractor2);
            track->add(gravelTrap1);
            track->add(gravelTrap2);
            track->printT();
            cout << "\033[1;37m";
            cout << "\n\n";

            return "satm";
        }

        void setTrack(Track* t)
        {
            track=t;
        }

        Track* getTrack()
        {
            return track;
        }

    private:
        string day = "frim";
        Car* car;
        Track* track;

};

#endif