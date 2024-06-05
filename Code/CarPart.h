#ifndef CARPART_H
#define CARPART_H

#include <iostream>
#include <string>

using namespace std;

class CarPart
{
    private:
      
        string name;
        int weight;
        string ID;
        int durability;
        int quality;
        int efficiency;

        public:

        CarPart();
        void setName(string n);
        string getName();
        void setWeight(int w);
        int getWeight();
        void setID(string t);
        string getID();
        void setDurability(int d);
        int getDurability();
        void setQuality(int q);
        int getQuality();
        void setEffiency(int e);
        int getEfficiency();
        void print();
};

#endif