#include "ConcreteStrategists.h"
#include <vector>
#include <iterator> 

ConcreteStrategists::ConcreteStrategists(){
	check=1;
}

ConcreteStrategists::ConcreteStrategists(Track* c){
	concrete=c;
	communication="No communication Set Yet";
}

void ConcreteStrategists::update(){
	communication=concrete->getCommunication();
}

void ConcreteStrategists::print(){
	if(communication){
		cout<<"Inform other Strategist\n";
	}
	else{
		cout<<"Don't inform other Strategist\n";
	}
}

void ConcreteStrategists::receiveMessage(string message){
	cout<<"Strategist ID:"<<getID()<<" received a message ⤐ \033[1;34m"<<message<<"\033[0m\n";
}

void ConcreteStrategists::sendMessage(string message){
	getMediator()->cast(message, this->check);
}

void ConcreteStrategists::addDecition(string type){
	if(head==NULL){
		head=new Stack(type);
	}
	else{
		Stack* newNode=new Stack(type);
		newNode->next=head;
		head=newNode;
	}
}