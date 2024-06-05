#ifndef CONCRETESTRATEGISTS_H
#define CONCRETESTRATEGISTS_H
#include "Strategists.h"
#include "Track.h"

class ConcreteStrategists: public Strategists
 {
 public:
 	ConcreteStrategists();
 	ConcreteStrategists(Track* c);
 	void update();
 	void print();
 	void receiveMessage(string);
    void sendMessage(string);
    void addDecition(string);
 private:
 	Track* concrete;
 	bool communication;
 };
#endif