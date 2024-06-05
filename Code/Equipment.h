#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>

using namespace std;

class Equipment
{
    private:
      
       string name;
       int weight;
       string ID;

	public:

        Equipment();
        void setName(string n);
        string getName();
        void setWeight(int w);
        int getWeight();
        void setID();
        string getID();
        void print();
};

#endif