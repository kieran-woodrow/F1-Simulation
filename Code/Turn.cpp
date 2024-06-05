#include "Turn.h"

Turn::Turn(int t){
	type=t;
}

void Turn::printT(){
	if(type==0){
		cout<<"Right Turn";
	}
	else{
		cout<<"Left Turn";
	}
}