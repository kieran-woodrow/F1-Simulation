#ifndef CAR_H
#define CAR_H
#include "StoredCar.h"
#include "TrackD.h"
#include "CarPart.h"
#include "CarPartMaker.h"
#include "Driver.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Car{
    
    public:
        Car();
        Car(string name);
        Car(string CarName,string season);
        virtual ~Car();
        void addPart(CarPart* p);
        CarPart* getCarPart(string p);
        void removePart(string p);
        string getCarName();
        void setCarName(string carName);
        void setSeason(string season);
        string getSeason();
        void setParts(vector<CarPart*> parts);
        vector<CarPart*> getParts();
        void printSpecs();
        StoredCar* makeMemento();
        void redoMemento(StoredCar* memento);
        void addDriver(Driver* d);
        Driver* getDriver();
        void printCarInfo();
        TrackD* decision;
        void setPositionStart(int a);
        int getPositionStart();
        void setPlaceMent(int a);
        int  getPlacement();
        void addTotalPoints(int a);
        int  getTotalPoints();
        
    private:
        string carName;
        string season;
        vector<CarPart*> parts;
        Driver* driver;
        int positionStart=0;
        int PlaceMent=0;
        int totalPoints=0;

};
#endif