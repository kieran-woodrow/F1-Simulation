#ifndef DECORATOR_H
#define DECORATOR_H
#include "TrackD.h"


class Decorator: public TrackD{
public:
	Decorator();
	virtual void printT();
	virtual void add(TrackD* t);
	virtual void remove();
private:
	TrackD* track;
};

#endif
