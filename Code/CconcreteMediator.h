#ifndef CCONCRETEMEDIATOR_H
#define CCONCRETEMEDIATOR_H
#include "CMediator.h"

class CconcreteMediator: public CMediator
 {
 public:
 	CconcreteMediator(string);
 protected:
 	string message;
 	
 }; 
 #endif
