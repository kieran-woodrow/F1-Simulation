#include "TurnLR.h"

TurnLR::TurnLR(Car* c){
	car=c;
}

void TurnLR::print(){
	car->decision->printT();
	cout<<"\n";
} 
