#include "ContextStrategy.h"

ContextStrategy::~ContextStrategy(){}

ContextStrategy::ContextStrategy(Strategists* s){
	strategist=s;
}

void ContextStrategy::addDecition(string type){
	strategist->addDecition(type);
}

string ContextStrategy::getDecition(){
	return strategist->getDecition();
}
