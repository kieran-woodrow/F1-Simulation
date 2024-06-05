#include "MoveStraight.h" 


MoveStraight::MoveStraight(Car* c){
	car=c;
}

void MoveStraight::print(){
	car->decision->printT();
	cout<<"\n";
}