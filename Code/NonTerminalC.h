#ifndef NONTERMINALC_H
#define NONTERMINALC_H
#include "Communication.h"
class Communication;

class NonTerminalC: public Communication
{
public:
	NonTerminalC(Communication* c);
	~NonTerminalC();
	string getEnglish();
    string interpret(Context* context);
private:
	Communication* communication;
};
#endif