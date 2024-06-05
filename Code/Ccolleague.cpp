#include "Ccolleague.h"
#include "CMediator.h"
void Ccolleague::reg(){
	id = mediator->registerMe(this);
} 

int Ccolleague::getCheck(){
	return check;
}
