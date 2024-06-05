#ifndef STRATEGISTS_H
#define STRATEGISTS_H
#include <iostream>
#include "Ccolleague.h"
#include "CMediator.h"
#include "Stack.h"
using namespace std;
class Driver;

class Strategists: public Ccolleague
 {
 public:
 	Strategists();
 	Strategists(Driver*);
 	virtual void update();
 	virtual void print();
 	virtual void receiveMessage(string);
    virtual void sendMessage(string);
    virtual void addDecition(string);
    string getDecition();
    void execute(); 
    int getID();
    CMediator* getMediator();
protected:
	Stack* head;
	Driver* driver;
 }; 

 #endif
