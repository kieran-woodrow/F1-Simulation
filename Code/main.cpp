#include <iostream>
#include <string>

#include "Container.h"
#include "EquipmentMaker.h"
#include "Equipment.h"
#include "CarPartMaker.h"
#include "CarPart.h"
#include "CarStore.h"
#include "Car.h"
#include "Australia.h"
#include "Europe.h"
#include "NorthAmerica.h"
#include "Asia.h"
#include "Africa.h"
#include "TrackMaker.h"
#include "TrackBuilder.h"
#include "AfricaFactory.h"
#include "AsiaFactory.h"
#include "AustraliaFactory.h"
#include "EuropeFactory.h"
#include "NorthAmericaFactory.h"
#include "PlaneFactory.h"
#include "ShipFactory.h"
#include "TruckFactory.h"

#include "Decorator.h"
#include "EngineerTeam.h"
#include "Barrier.h"
#include "GravelTrap.h"
#include "Pitstop.h"
#include "Startline.h"

#include "ConcreteStrategists.h"
#include "CconcreteMediator.h"
#include "Context.h"
#include "NonTerminalC.h"
#include "TerminalC.h"
#include "Straight.h"
#include "Turn.h"

#include "Curve.h"
#include "Driver.h"
#include "Strategists.h"
#include "TurnLR.h"

#include "Competitors.h"
#include "Race.h"
#include "Weekend.h"

using namespace std;

int main() {
   
    srand((unsigned int)time(NULL));

    ContinentFactory* continentF[5];

    continentF[0]= new AustraliaFactory();
    continentF[1]= new EuropeFactory();
    continentF[2]= new AsiaFactory();
    continentF[3]= new NorthAmericaFactory();
    continentF[4]= new AfricaFactory();
    
    Continent** continent= new Continent*[5];


    string AustraliaNames[5];

    AustraliaNames[0] = "Perth";
    AustraliaNames[1] = "Melbourne";
    AustraliaNames[2] = "Sydney";
    AustraliaNames[3] = "Adelaide";
    AustraliaNames[4] = "Brisbane";

    string EuropeNames[5];

    EuropeNames[0] = "Paris";
    EuropeNames[1] = "Bahrain";
    EuropeNames[2] = "Madrid";
    EuropeNames[3] = "Turin";
    EuropeNames[4] = "Munich";

    string AsiaNames[5];

    AsiaNames[0] = "Tokyo";
    AsiaNames[1] = "Shanghai";
    AsiaNames[2] = "Seoul";
    AsiaNames[3] = "Dubai";
    AsiaNames[4] = "Qatar";

    string NorthAmericaNames[5];

    NorthAmericaNames[0] = "Toronto";
    NorthAmericaNames[1] = "New York";
    NorthAmericaNames[2] = "Monterrey";
    NorthAmericaNames[3] = "California";
    NorthAmericaNames[4] = "Los Angeles";

    string AfricaNames[5];

    AfricaNames[0] = "Cape Town";
    AfricaNames[1] = "Johannesburg";
    AfricaNames[2] = "Lagos";
    AfricaNames[3] = "Casablanca";
    AfricaNames[4] = "Cairo";

    string** countrynames = new string*[5];

    for(int i = 0; i<5; i++)
    {
        countrynames[i] = new string[5];
    }

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if(i==0)
            {
                countrynames[i][j]= AustraliaNames[j];
            }
            else if(i==1)
            {
                countrynames[i][j]= EuropeNames[j];
            }
            else if(i==2)
            {
                countrynames[i][j]= AsiaNames[j];
            }
            else if(i==3)
            {
                countrynames[i][j]= NorthAmericaNames[j];
            }
            else if(i==4)
            {
                countrynames[i][j]= AfricaNames[j];
            }
        }
    }
    
    
    int continentcounter=0, countrynamecol=0, countrynamerow=0;
    string continueprogram="yes";
    string answer="";

    cout << "\033[1;35m";
    std::cout<<"===================="<<endl;
    cout << "\033[1;33m";
    std::cout<<"F1 Team Simulation:"<<endl;
    std::cout<<"1. Run entire program"<<endl;
    cout << "\033[1;35m";
    std::cout<<"===================="<<endl;
    cout << "\033[1;33m";
    std::cout<<endl;
    std::cin>> answer;
    cout << "\033[1;37m";

    TrackBuilder *builder = NULL;
    Track t;
    Container* container=NULL;
    Container* nextSeasonContainer=NULL;
    EquipmentMaker *e1=NULL;
    EquipmentMaker *e2=NULL;
    EquipmentMaker *e3=NULL;
    EquipmentMaker *e4=NULL;
    EquipmentMaker *e5=NULL;
    EquipmentMaker *e6=NULL;
    EquipmentMaker *e7=NULL;

    Car* OurTeamCar=NULL;
    Car* nextSeasonCar=NULL;
    Car* car2 =NULL;
    Car* car3 =NULL;
    Car* car4 =NULL;
    Car* car5 =NULL;
    Car* car6 =NULL;
    Car* car7 =NULL;
    Car* car8 =NULL;
    Car* car9 =NULL;
    Car* car10 =NULL;
    Car* car11 =NULL;
    Car* car12 =NULL;
    Car* car13 =NULL;
    Car* car14 =NULL;

    Driver* OurTeamDriver=NULL;
    Driver* driver2=NULL;
    Driver* driver3=NULL;
    Driver* driver4=NULL;
    Driver* driver5=NULL;
    Driver* driver6=NULL;
    Driver* driver7=NULL;
    Driver* driver8=NULL;
    Driver* driver9=NULL;
    Driver* driver10=NULL;
    Driver* driver11=NULL;
    Driver* driver12=NULL;
    Driver* driver13=NULL;
    Driver* driver14=NULL;

    vector<Car*> F1Cars;
    vector<Equipment*> equipment;

    DepartmentC* compDepartments=NULL;
    Department* d=NULL;
    EngineerTeam* currentSeasonTeam=NULL;
    EngineerTeam* newSeasonTeam=NULL;

    CconcreteMediator* concreteMediator=NULL;
    Ccolleague* concreteStrategists[1];
    Ccolleague* engineerTeam=NULL;
    Race* race=NULL;

    CarPartMaker* carpartmaker=NULL;

    Ship* ship=NULL;
    Plane* plane=NULL;
    Truck* truck=NULL;

    Weekend* weekend=NULL;
    Day* day = NULL;
    Competitors* competitors= NULL;

    
    while(continueprogram=="yes")
    {
        //cout<<countrynames[countrynamerow][countrynamecol]<<endl;
    
        builder = new TrackMaker();

        builder->setNameTrack(countrynames[countrynamerow][countrynamecol]+ " Grand Prix");
        continent[continentcounter]= continentF[continentcounter]->createContinent(builder);
        continent[continentcounter]->setCountryName(countrynames[countrynamerow][countrynamecol]);
        continent[continentcounter]->construct();
        Track t = ((TrackMaker *)builder)->getTrack();
        t.setInfo("name",countrynames[countrynamerow][countrynamecol]+ " Grand Prix");
    
        if(answer=="1")
        {
            if(!continent[continentcounter]->isEuropean())
            {
                container= new Container();
                container->setContainerID("254645");
                container->setContainerName("TeamMarioContainer");
                nextSeasonContainer= new Container();
                nextSeasonContainer->setContainerID("254645");
                nextSeasonContainer->setContainerName("TeamMarioContainer2");
            
                e1 = new EquipmentMaker("Wrench", "Garage");
                e2 = new EquipmentMaker("Hammer", "Garage");
                e3 = new EquipmentMaker("Scissor Jack", "Garage");
                e4 = new EquipmentMaker("Drill", "Garage");
                e5 = new EquipmentMaker("Extension Bar", "Garage");
                e6 = new EquipmentMaker("Ratchet", "Garage");
                e7 = new EquipmentMaker("Pump", "Garage");

                OurTeamCar = new Car("Mercedes GM143");
                nextSeasonCar= new Car("Mercedes MarioCart-v1");
                car2 = new Car("Audi AM547");
                car3 = new Car("Ferrari F767");
                car4 = new Car("Ferrari F238");
                car5 = new Car("Audi AM999");
                car6 = new Car("Mercedes GM199");
                car7 = new Car("McLaren MC765");
                car8 = new Car("McLaren MC622");
                car9 = new Car("RedBull RB662");
                car10 = new Car("RedBull RB145");
                car11 = new Car("Renault RN822");
                car12 = new Car("Renault RN236");
                car13= new Car("BMW BM533");
                car14 = new Car("BMW BM372");

                OurTeamDriver = new Driver("Mario");
                driver2= new Driver("Luigi");
                driver3= new Driver("Waluigi");
                driver4= new Driver("Yoshi");
                driver5= new Driver("Wario");
                driver6= new Driver("Bowser");
                driver7= new Driver("Princess Peach");
                driver8= new Driver("Diddy Kong");
                driver9= new Driver("Donkey Kong");
                driver10= new Driver("King Boo");
                driver11= new Driver("Toad");
                driver12= new Driver("Rosalina");
                driver13= new Driver("Koopa Troopa");
                driver14= new Driver("Toadette");

                OurTeamCar->addDriver(OurTeamDriver);
                OurTeamCar->setSeason("Season 1");
                car2->addDriver(driver2);
                car3->addDriver(driver3);
                car4->addDriver(driver4);
                car5->addDriver(driver5);
                car6->addDriver(driver6);
                car7->addDriver(driver7);
                car8->addDriver(driver8);
                car9->addDriver(driver9);
                car10->addDriver(driver10);
                car11->addDriver(driver11);
                car12->addDriver(driver12);
                car13->addDriver(driver13);
                car14->addDriver(driver14);

                F1Cars.push_back(OurTeamCar);
                F1Cars.push_back(car2);
                F1Cars.push_back(car3);
                F1Cars.push_back(car4);
                F1Cars.push_back(car5);
                F1Cars.push_back(car6);
                F1Cars.push_back(car7);
                F1Cars.push_back(car8);
                F1Cars.push_back(car9);
                F1Cars.push_back(car10);
                F1Cars.push_back(car11);
                F1Cars.push_back(car12);
                F1Cars.push_back(car13);
                F1Cars.push_back(car14);

                compDepartments=new DepartmentC();
                d=new Department("Tech",F1Cars.at(0), container);
                compDepartments->addDepartment(d);

                currentSeasonTeam = new EngineerTeam("Current Season Team", F1Cars.at(0),compDepartments,container);
                newSeasonTeam = new EngineerTeam("New Season Team", nextSeasonCar,compDepartments, nextSeasonContainer);

                currentSeasonTeam->showDepartments();

                currentSeasonTeam->getDepartment("Engine")->addPart("Engine");
                currentSeasonTeam->getDepartment("Engine")->addPart("Spark Plugs");
                currentSeasonTeam->getDepartment("Engine")->addPart("Camshaft");
                currentSeasonTeam->getDepartment("Engine")->addPart("Cylinder heads");
                currentSeasonTeam->getDepartment("Engine")->addPart("Valves");
                currentSeasonTeam->getDepartment("Engine")->addPart("Pistons");
                currentSeasonTeam->getDepartment("Engine")->addPart("Oil Pan");
                currentSeasonTeam->getDepartment("Engine")->addPart("Exhaust");

                currentSeasonTeam->getDepartment("Electronics")->addPart("Battery");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Alternator");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Belts");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Wiring");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Fuses");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Relays");

                currentSeasonTeam->getDepartment("Chassis")->addPart("Frame");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Axles");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Suspension");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Load Bearings");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Steering");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Brakes");

                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Hood Vent");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Side Skirts");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Underbelly");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Diffuser");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Wing");

                F1Cars.at(0)->printCarInfo();
                F1Cars.at(0)->printSpecs();

                concreteMediator= new CconcreteMediator("Communication");
                engineerTeam= new EngineerTeam();
                concreteStrategists[0]= new ConcreteStrategists();
                engineerTeam->mediator=concreteMediator;
                concreteStrategists[0]->mediator=concreteMediator;
                engineerTeam->reg();
                concreteStrategists[0]->reg();
                
                race = new Race();
                race->setTrack(&t);
                
                concreteStrategists[0]->sendMessage("The tyre compound is currently "+ race->getCurrentCompound());
                race->change();
                concreteStrategists[0]->sendMessage("For this track we're going to need the tyre compound to be "+race->getCurrentCompound());
                concreteStrategists[0]->sendMessage("Good day "+ currentSeasonTeam->getDepartment("Chassis")->getName()+ " team, for this race the car will need "+race->getCurrentCompound()+" tyres.");
                engineerTeam->sendMessage("Okay, we will use those tyres.");

                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 1");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 2");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 3");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 4");

                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 5");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;
                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 6");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;
                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 7");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;
                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 8");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;
                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 9");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;
                carpartmaker= new CarPartMaker(race->getCurrentCompound()+" Tyre 10");
                container->constructContainer(carpartmaker);
                carpartmaker=NULL;

                ship= new Ship();
                ship->addContainer(container);
                plane= new Plane();
                plane->addCar(OurTeamCar);

                std::cout<<"RACING WEEKEND"<<endl;

                weekend =new Weekend(F1Cars, &t);
                day = weekend->get();
                competitors= weekend->getCompetitors();
                race->setCompetitors(competitors);
                weekend->setRace(race);
                day->handle("frim",OurTeamCar);

            }
            else
            {
                
                e1 = new EquipmentMaker("Wrench", "Garage");
                e2 = new EquipmentMaker("Hammer", "Garage");
                e3 = new EquipmentMaker("Scissor Jack", "Garage");
                e4 = new EquipmentMaker("Drill", "Garage");
                e5 = new EquipmentMaker("Extension Bar", "Garage");
                e6 = new EquipmentMaker("Ratchet", "Garage");
                e7 = new EquipmentMaker("Pump", "Garage");

                equipment.push_back(e1->getEquipment());
                equipment.push_back(e2->getEquipment());
                equipment.push_back(e3->getEquipment());
                equipment.push_back(e4->getEquipment());
                equipment.push_back(e5->getEquipment());
                equipment.push_back(e6->getEquipment());
                equipment.push_back(e7->getEquipment());

                OurTeamCar = new Car("Mercedes GM143");
                nextSeasonCar= new Car("Mercedes MarioCart-v1");
                car2 = new Car("Audi AM547");
                car3 = new Car("Ferrari F767");
                car4 = new Car("Ferrari F238");
                car5 = new Car("Audi AM999");
                car6 = new Car("Mercedes GM199");
                car7 = new Car("McLaren MC765");
                car8 = new Car("McLaren MC622");
                car9 = new Car("RedBull RB662");
                car10 = new Car("RedBull RB145");
                car11 = new Car("Renault RN822");
                car12 = new Car("Renault RN236");
                car13= new Car("BMW BM533");
                car14 = new Car("BMW BM372");

                OurTeamDriver = new Driver("Mario");
                driver2= new Driver("Luigi");
                driver3= new Driver("Waluigi");
                driver4= new Driver("Yoshi");
                driver5= new Driver("Wario");
                driver6= new Driver("Bowser");
                driver7= new Driver("Princess Peach");
                driver8= new Driver("Diddy Kong");
                driver9= new Driver("Donkey Kong");
                driver10= new Driver("King Boo");
                driver11= new Driver("Toad");
                driver12= new Driver("Rosalina");
                driver13= new Driver("Koopa Troopa");
                driver14= new Driver("Toadette");

                vector<Car*> F1Cars;

                OurTeamCar->addDriver(OurTeamDriver);
                OurTeamCar->setSeason("Season 1");
                car2->addDriver(driver2);
                car3->addDriver(driver3);
                car4->addDriver(driver4);
                car5->addDriver(driver5);
                car6->addDriver(driver6);
                car7->addDriver(driver7);
                car8->addDriver(driver8);
                car9->addDriver(driver9);
                car10->addDriver(driver10);
                car11->addDriver(driver11);
                car12->addDriver(driver12);
                car13->addDriver(driver13);
                car14->addDriver(driver14);

                F1Cars.push_back(OurTeamCar);
                F1Cars.push_back(car2);
                F1Cars.push_back(car3);
                F1Cars.push_back(car4);
                F1Cars.push_back(car5);
                F1Cars.push_back(car6);
                F1Cars.push_back(car7);
                F1Cars.push_back(car8);
                F1Cars.push_back(car9);
                F1Cars.push_back(car10);
                F1Cars.push_back(car11);
                F1Cars.push_back(car12);
                F1Cars.push_back(car13);
                F1Cars.push_back(car14);

                compDepartments=new DepartmentC();
                d=new Department("Tech",F1Cars.at(0), NULL);
                compDepartments->addDepartment(d);

                currentSeasonTeam = new EngineerTeam("Current Season Team", F1Cars.at(0),compDepartments,NULL);
                newSeasonTeam = new EngineerTeam("New Season Team", nextSeasonCar,compDepartments, NULL);

                currentSeasonTeam->showDepartments();

                currentSeasonTeam->getDepartment("Engine")->addPart("Engine");
                currentSeasonTeam->getDepartment("Engine")->addPart("Spark Plugs");
                currentSeasonTeam->getDepartment("Engine")->addPart("Camshaft");
                currentSeasonTeam->getDepartment("Engine")->addPart("Cylinder heads");
                currentSeasonTeam->getDepartment("Engine")->addPart("Valves");
                currentSeasonTeam->getDepartment("Engine")->addPart("Pistons");
                currentSeasonTeam->getDepartment("Engine")->addPart("Oil Pan");
                currentSeasonTeam->getDepartment("Engine")->addPart("Exhaust");

                currentSeasonTeam->getDepartment("Electronics")->addPart("Battery");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Alternator");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Belts");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Wiring");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Fuses");
                currentSeasonTeam->getDepartment("Electronics")->addPart("Relays");

                currentSeasonTeam->getDepartment("Chassis")->addPart("Frame");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Axles");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Suspension");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Load Bearings");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Steering");
                currentSeasonTeam->getDepartment("Chassis")->addPart("Brakes");

                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Hood Vent");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Side Skirts");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Underbelly");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Diffuser");
                currentSeasonTeam->getDepartment("Aerodynamics")->addPart("Wing");

                F1Cars.at(0)->printCarInfo();
                F1Cars.at(0)->printSpecs();

                concreteMediator= new CconcreteMediator("Communication");
                //Ccolleague* concreteStrategists[1];
                engineerTeam= new EngineerTeam();
                concreteStrategists[0]= new ConcreteStrategists();
                engineerTeam->mediator=concreteMediator;
                concreteStrategists[0]->mediator=concreteMediator;
                engineerTeam->reg();
                concreteStrategists[0]->reg();
            
                //continent[continentcounter]->construct();
                //Track t = ((TrackMaker *)builder)->getTrack();
                race = new Race();
                race->setTrack(&t);
                
                concreteStrategists[0]->sendMessage("The tyre compound is currently "+ race->getCurrentCompound());
                race->change();
                concreteStrategists[0]->sendMessage("For this track we're going to need the tyre compound to be "+race->getCurrentCompound());
                concreteStrategists[0]->sendMessage("Good day "+ currentSeasonTeam->getDepartment("Chassis")->getName()+ " team, for this race the car will need "+race->getCurrentCompound()+" tyres.");
                engineerTeam->sendMessage("Okay, we will use those tyres.");

                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 1");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 2");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 3");
                currentSeasonTeam->getDepartment("Chassis")->addPart(race->getCurrentCompound()+" Tyre 4");

                truck= new Truck();

                for(int k=0; k<equipment.size();k++)
                {
                    truck->addEquipment(equipment.at(k));
                }
                
                plane= new Plane();
                plane->addCar(OurTeamCar);

                std::cout<<"RACING WEEKEND"<<endl;

                weekend =new Weekend(F1Cars, &t);
                day = weekend->get();
                competitors= weekend->getCompetitors();
                race->setCompetitors(competitors);
                weekend->setRace(race);
                day->handle("frim",OurTeamCar);
            }
        }
        else if(answer=="2")
        {
            std::cout<<"RACING WEEKEND"<<endl;
            race = new Race();
            race->setTrack(&t);
            race->change();
            weekend =new Weekend(F1Cars, &t);
            day = weekend->get();
            competitors= weekend->getCompetitors();
            race->setCompetitors(competitors);
            weekend->setRace(race);
            day->handle("frim",OurTeamCar);
        }
        else if(answer=="3")
        {
            OurTeamDriver->printDriverInfo();
        }
        

        if(answer=="1" || answer=="2")
        {
            if(continentcounter==4)
            {
                continentcounter=0;
            }
            else
            {
                continentcounter++;
            }
            
            if(countrynamerow==4)
            {
                if(countrynamecol<4)
                {
                    countrynamerow=0;
                    countrynamecol++;
                }
                else
                {
                    countrynamerow=0;
                    countrynamecol=0;
                }
                
            }
            else
            {
                countrynamerow++;
            }
        }
      
        cout << "\033[1;35m";
        std::cout<<"===================="<<endl;
        cout << "\033[1;33m";
        std::cout<<"F1 Team Simulation: (Select an option)"<<endl;
        std::cout<<"1. Run entire program"<<endl;
        std::cout<<"2. Run weekend simulation"<<endl;
        std::cout<<"3. Show driver profile"<<endl;
        std::cout<<"4. End Simulation"<<endl;
        cout << "\033[1;35m";
        std::cout<<"===================="<<endl;
        cout << "\033[1;33m";
        std::cout<<endl;
        std::cin>> answer;
        std::cout<<endl;
        cout << "\033[1;37m";

        if(answer=="4")
        {
            continueprogram="No";
        }

    }

    cout << "\033[1;31m";
    cout<<"End of F1 Team Simulator"<<endl;

    return 0;
} 
