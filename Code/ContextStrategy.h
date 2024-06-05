#ifndef CONTEXTSTRATEGY_H
#define CONTEXTSTRATEGY_H

#include <string>
using namespace std;
#include "Strategists.h"
class ContextStrategy
{
public:
	ContextStrategy(Strategists* s);
	~ContextStrategy();
	void addDecition(string);
	string getDecition();
	
private:
	Strategists* strategist;
};
#endif