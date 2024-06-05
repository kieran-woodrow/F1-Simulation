#ifndef CURVELR_H
#define CURVELR_H
#include "Driver.h"
#include "Car.h"

class CurveLR: public Driver
 {
 public:
 	CurveLR(Car*);
 	void print();
 private:
 	Car* car;
 }; 
#endif