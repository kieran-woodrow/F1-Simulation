#include "EngineerTeam.h"

EngineerTeam::EngineerTeam(){
	check=0;
}
EngineerTeam::EngineerTeam(string name, Car* car, Container* con)
{

	
	departments.push_back(new Engine(car,con));
	departments.push_back(new Chassis(car,con));
	departments.push_back(new Electronics(car,con));
	departments.push_back(new Aerodynamics(car, con));
	
	this->name = name;
	

}

EngineerTeam::EngineerTeam(string name, Car* car,DepartmentC *c, Container* con)
{

	
	this->name = name;
	
	departments.push_back(new Engine(car,con));
	departments.push_back(new Chassis(car,con));
	departments.push_back(new Electronics(car,con));
	departments.push_back(new Aerodynamics(car,con));
	vector<Department*> l=c->getDepartments();
	if(!l.empty()){
		for (vector<Department*>::iterator it=l.begin(); it!=l.end(); ++it){
			departments.push_back(*it);
		}
	}
	
	

}

Department* EngineerTeam::getDepartment(string dep)
{

	for (auto i = departments.begin(); i != departments.end(); i++){
		if (dep == (*i)->getName()){
			return *i;
		}
	}
	
	return nullptr;

}

void EngineerTeam::showDepartments()
{

	cout << "\033[1;34m";
	cout << "List of departments in " << name << ":\n";
	cout << "\033[1;35m";
	for (auto i = departments.begin(); i != departments.end(); i++){
		cout << (*i)->getName() << endl;
	}
	cout << "\033[1;37m";
	cout << "\n";
	

}

void EngineerTeam::receiveMessage(string message){
	cout<<"Engineer ID:"<<id<<" receive message  ⤐ \033[1;36m"<<message<<"\033[0m\n";
}
void EngineerTeam::sendMessage(string message){
	mediator->cast(message,this->check);
}
