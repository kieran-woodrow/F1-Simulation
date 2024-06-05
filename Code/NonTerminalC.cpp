#include "NonTerminalC.h"

NonTerminalC::NonTerminalC(Communication* c){
	communication=c;
}

NonTerminalC::~NonTerminalC(){}

string NonTerminalC::interpret(Context* context){
	return communication->interpret(context);
}