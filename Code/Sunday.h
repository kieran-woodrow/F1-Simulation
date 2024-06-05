#ifndef SUNDAY_H
#define SUNDAY_H

#include "Day.h"
#include <fstream>
#include "EngineerTeam.h"
#include "ConcreteStrategists.h"
#include "CconcreteMediator.h"
#include "Context.h"
#include "NonTerminalC.h"
#include "TerminalC.h"
#include "CarStore.h"

class Sunday : public Day{

    public:
        Sunday(){};
        void handle(string day, Car* car){
            this->car = car;
            if (day == this->day) handle(todaysEvent(), car);
            else Day::handle(day, car);

        }

        string todaysEvent(){

            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\033[1;33m";
            cout << " < EVENT >  S u n d a y\n";
            cout << "\033[1;35m";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "\033[1;34m";
            cout << "Race Day:\n";
            cout << "\033[1;37m";

            CarStore* carStorage=new CarStore();

            carStorage->saveStateToMemento(car->makeMemento());

            r->StartRacing();
            bool needsRepairing=false;
            vector<CarPart*> cp= car->getParts();
            for(int k=0; k<cp.size(); k++)
            {
                if(cp.at(k)->getName()=="Engine" && cp.at(k)->getDurability()<-2)
                {
                    string terminology="terminology.txt";
                    string meaning="meaning.txt";

                    ifstream file1;
                    ifstream file2;
                    file1.open(terminology.c_str());
                    file2.open(meaning.c_str());

                    string store1="";
                    string store2="";

                    Context* context=new Context();
                    TerminalC* terminal=new TerminalC("");
                    while(!file1.eof()){
                        getline(file1, store1);
                        getline(file2, store2);
                        terminal->setEnglish(store1);
                        context->assign(terminal, store2);
                    }
                    file1.close();
                    file2.close();

                    terminal->setEnglish("Thermostats");
                    CconcreteMediator* concreteMediator= new CconcreteMediator("Communication");
                    Ccolleague* concreteStrategists[1];
                    Ccolleague* engineerTeam= new EngineerTeam();
                    
                    concreteStrategists[0]= new ConcreteStrategists();
                   

                    engineerTeam->mediator=concreteMediator;
                    concreteStrategists[0]->mediator=concreteMediator;
                
                    engineerTeam->reg();
                    concreteStrategists[0]->reg();

                    cout << "\033[1;33m";
                    cout << "Chat Log of team during race:\n";
                    cout << "-----------------------------\n";
                    cout << "\033[1;37m";
                    concreteStrategists[0]->sendMessage("The Engine of the car it's overheating");
                    engineerTeam->sendMessage("The problem is caused by "+terminal->interpret(context));
                    cout << "\033[1;33m";
                    cout << "-----------------------------\n";
                    cout << "\033[1;37m";
                    cout << endl;
                }
                if(cp.at(k)->getDurability()<-2)
                {
                    needsRepairing=true;

                    cout << "\033[1;37m";
                    cout<<"The \033[1;33m"<<cp.at(k)->getName()<<"\033[1;37m needs repairing."<<" Its durability is \033[1;31m"<<cp.at(k)->getDurability()<<endl;
                    cout << "\033[1;37m";
                }
            }

            if(needsRepairing==true)
            {
                car->redoMemento(carStorage->getStateFromMemento());
                cout << "\033[1;32m";
                cout<<"The "<<car->getCarName()<<" has been serviced and the durability of the parts have been restored to original condition.\n"<<endl;
                car->printSpecs(); //add durability specs
            }
            else
            {
                cout << "\033[1;32m";
                cout<<"The "<<car->getCarName()<<" does not need to be serviced as the durability of the parts have are in good condition.\n"<<endl;
            }
            cout << "\033[1;37m";
            return "end";
        }
        void setRace(Race* r){
            
            this->r=r;
        }
        void setCompetitors(Competitors* c){
            comp=c;
        }

    private:
        string day = "sun";
        Car* car;
        Race* r;
        Competitors* comp;
};

#endif