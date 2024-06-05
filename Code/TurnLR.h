#ifndef TURNLR_H
#define TURNLR_H
#include "Driver.h"
#include "Car.h"

class TurnLR: public Driver
 {
 public:
 	TurnLR(Car*);
 	void print();
 private:
 	Car* car;
 }; 
#endif 
