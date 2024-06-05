#include "Decorator.h"

Decorator::Decorator(){
	track=nullptr;
}

void Decorator::printT(){
	if(track){
		track->printT();
	}
}

void Decorator::add(TrackD* t){
	if(track==nullptr){
		track=t;
	}
	else{
		track->add(t);
	}
}

void Decorator::remove(){
	if(track){
		track=nullptr;
	}
}