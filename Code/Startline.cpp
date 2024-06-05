#include "Startline.h"

 void Startline::printT(){
 	Decorator::printT();
	cout << "\033[1;37m";
 	cout<<"\t\tat the Starting line";
	cout << "\033[1;36m";
 }
