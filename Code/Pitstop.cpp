#include "Pitstop.h"

void Pitstop::printT(){
	Decorator::printT();
	cout << "\033[1;37m";
	cout<<"\t\tat the Pit stop";
	cout << "\033[1;36m";
}