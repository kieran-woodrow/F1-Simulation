#ifndef COMPETITORS_H
#define COMPETITORS_H
#include <vector>
#include "Car.h"
#include <iostream>
#include <ctime>
using namespace std;

class Competitors{

    public:
        Competitors(vector<Car*> c);
        vector<Car*> qualify();
        float* getRandomQualifyingTimesForCars();
        vector<Car*> getQualifiedCars();
        Competitors* getCompetitors();

    private:
        vector<Car*> cars;
        vector<Car*> QualifiedCars;
};
#endif