 
#ifndef TERMINALC_H
#define TERMINALC_H
#include "Communication.h"
#include "Context.h"
class Communication;

class TerminalC: public Communication
{
public:
	TerminalC(string s);
	void setEnglish(string s);
	string getEnglish();
    string interpret(Context* context);
private:
	string english;
};
#endif