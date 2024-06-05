#include "Barrier.h"

void Barrier::printT(){
	Decorator::printT();
	cout << "\033[1;37m";
 	cout<<"\t\tat the Barriers";
	cout << "\033[1;36m";
} 
