#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include <map>
using namespace std;
#include "TerminalC.h"
#include "Node.h"
class TerminalC;

class Context
{
public:
	Context();
	~Context();
	string Communication(const string s) const;
	void assign(TerminalC* t, string Eenglish);
private:
	Node* head;
};
#endif