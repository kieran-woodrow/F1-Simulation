#ifndef CURVE_H
#define CURVE_H
#include "TrackD.h"

class Curve: public TrackD
 {
 public:
 	Curve(int);
 	virtual void printT();
 private:
 	int type;
 	
 };
 #endif
