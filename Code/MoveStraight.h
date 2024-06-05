#ifndef MOVESTRAIGHT_H
#define MOVESTRAIGHT_H
#include "Driver.h"
#include "Car.h"

class MoveStraight: public Driver
 {
 public:
 	MoveStraight(Car*);
 	void print();
 private:
 	Car* car;
 }; 
#endif 
 
