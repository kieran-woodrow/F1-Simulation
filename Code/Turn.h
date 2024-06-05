#ifndef TURN_H
#define TURN_H
#include "TrackD.h"

class Turn: public TrackD
 {
 public:
 	Turn(int);
 	virtual void printT();
 private:
 	int type;
 	
 }; 
#endif