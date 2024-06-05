#include "TrackD.h"

void TrackD::attach(Strategists* s){
	strategists.push_back(s);
}

void TrackD::detach(Strategists* s){
	for(int index=0; index<strategists.size(); index++){
		if(strategists.at(index)==s){
			strategists.erase(strategists.begin()+index);
		}
	}
}

void TrackD::notify(){
	for(int index=0; index<strategists.size(); index++){
		strategists.at(index)->update();
	}
}


void TrackD::add(TrackD* t){}

void TrackD::remove(){}