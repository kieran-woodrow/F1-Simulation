#include "CurveLR.h"

CurveLR::CurveLR(Car* c){
	car=c;
}

void CurveLR::print(){
	car->decision->printT();
	cout<<"\n";
}
