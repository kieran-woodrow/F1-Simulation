#ifndef CMEDIATOR_H
#define CMEDIATOR_H
#include <string>
#include <iostream>
#include <vector>
#include "Participant.h"
using namespace std;

class CMediator
{
public:
	CMediator();
	virtual ~CMediator();
	int registerMe(Ccolleague* m);
	bool talkTo(int, string);
	void cast(string m, int i);
protected:
	vector<Participant*> participant;
	int nextId;
};
#endif