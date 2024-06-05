#ifndef TRACKD_H
#define TRACKD_H
#include <iostream>
#include <vector>
#include "Strategists.h"
using namespace std;


class TrackD
{
public:
	virtual void printT()=0;
	virtual void add(TrackD* t);
	virtual void remove();
	void attach(Strategists* s);
	void detach(Strategists* s);
	void notify();
private:
	vector<Strategists*> strategists;
	
};
#endif
