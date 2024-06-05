#ifndef COMMUNICATION_H
#define COMMUNICATION_H
#include <string>
using namespace std;
class Context;

class Communication
{
public:
	Communication(){};
	virtual string interpret(Context* context)=0;
};
#endif