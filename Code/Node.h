#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
using namespace std;

class Node
 {
 public:
 	Node(string terminology, string meaning){
 		this->terminology=terminology;
 		this->meaning=meaning;
 		next=NULL;
 	}
 	string terminology;
 	string meaning;
 	Node* next;
 }; 
 #endif
