#include "GravelTrap.h"

void GravelTrap::printT(){
	Decorator::printT();
	cout << "\033[1;37m";
	cout <<"\t\tat the Gravel traps";
	cout << "\033[1;36m";
} 
