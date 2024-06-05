#include "Context.h"

Context::Context(){
	head=NULL;
}

Context::~Context(){}

// Translate the language or terminology Engineers used to communicate strategists
string Context::Communication(const string s) const{
	//check if the string does exist in a map
	if(head!=NULL){
		Node* curr=head;
		while(curr!=NULL){
			if(curr->terminology==s){
				return curr->meaning;
			}
			curr=curr->next;
		}
	}
	return "Unable to Translate";
}
void Context::assign(TerminalC* t, string Eenglish) {
	Node* newNode=new Node(t->getEnglish(), Eenglish);
	if(head==NULL){
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
}
