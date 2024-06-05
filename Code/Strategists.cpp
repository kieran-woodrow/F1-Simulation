#include "Strategists.h"
#include "Driver.h"
Strategists::Strategists(){
	head=NULL;
}
void Strategists::receiveMessage(string s){}
void Strategists::sendMessage(string s){}
int Strategists::getID(){return id;}
CMediator* Strategists::getMediator(){return mediator;}
string Strategists::getDecition(){

	int choice=(rand() % 30) + 0;
	if(choice>=0 && choice<=5){
		return "Straight";
	}
	else if(choice>=6 && choice<=10){
		return "LeftTurn";
	}
	else if(choice>=11 && choice<=15){
		return "Rightturn";
	}
	else if(choice>=16 && choice<=20){
		return "CurveRight";
	}
	else{
		return "CurveLeft";
	}
}
void Strategists::update(){}
void Strategists::print(){}
void Strategists::addDecition(string ){}

Strategists::Strategists(Driver* c){
	driver=c;
}
void Strategists::execute(){
	driver->print();
}
