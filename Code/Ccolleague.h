#ifndef CCOLLEAGUE_H
#define CCOLLEAGUE_H
#include <string>
using namespace std;
//#include "CMediator.h"
class CMediator;

class Ccolleague
{
public:
	Ccolleague(){};
	virtual ~Ccolleague(){};
	virtual void receiveMessage(string)=0;
	virtual void sendMessage(string)=0;
	void reg();
	CMediator* mediator;
	int getCheck();
protected:
	int check;
	int id;
};
#endif