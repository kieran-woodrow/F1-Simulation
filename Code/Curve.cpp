#include "Curve.h"

Curve::Curve(int c){
	type=c;
}

void Curve::printT(){
	if(type==0){
		cout<<"Curve Right";
	}
	else{
		cout<<"Curve Left";
	}
}
