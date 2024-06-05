#include "TerminalC.h"

TerminalC::TerminalC(string s){}
void TerminalC::setEnglish(string s){
	english=s;
}
string TerminalC::getEnglish(){
	return english;
}

string TerminalC::interpret(Context* context){
	return context->Communication(english);
}