#ifndef STACK_H
#define STACK_H
#include <string>
#include <iostream>

class Stack
 {
 public:
 	Stack(string v){
 		data=v;
 	}
 	Stack* next;
 	string data;
 	
 };
 #endif
