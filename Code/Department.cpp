#include "Department.h"
Department::Department()
{

}

Department::Department(string name,Car* c, Container* con)
{

	this->name=name;
	car=c;
	container= con;

}

string Department::getName()
{

	return name;

}

void Department::setName(string n)
{

	name=n;

}

Car* Department::getComponent()
{

	return car;

}

void Department::setCar(Car* c)
{

	car=c;

}

void Department::printName()
{

	cout<<this->getName()<<" working on: "<<car->getCarName()<<endl;

}

void Department::addPart(string p)
{

	Car* c = Department::getComponent();
	CarPartMaker* cp= new CarPartMaker(p);
	bool loop = false;

	while(loop==false)
	{
		bool successfulSimulation= runSimulation(cp->getCarPart(), car->getCarPart(p));

		if(successfulSimulation==true)
		{
			c->removePart(p);
			if(container!=NULL)
			container->removeContainerItem(p);
			cout << "\033[1;32m";
			cout<< cp->getName() << " has been successfully added to the "<<car->getCarName()<<" Formula 1 car"<<endl;
			cout << "\033[1;37m";
			c->addPart(cp->getCarPart());

			if(container!=NULL)
			container->constructContainer(cp);
			
			loop=true;
		}
		else
		{
			cout << "\033[1;31m";
			cout<< cp->getName() << " has failed the car part simulation and won't be added to the "<<car->getCarName()<<" Formula 1 car"<<endl;
			cout << "\033[1;37m";
			cp= new CarPartMaker(p);
		}
	}
	
	
	
}

bool Department::runSimulation(CarPart* cp, CarPart* old)
{
	command= new CarPartSimulatorCommand(cp, old);
	return command->execute();
}

void Department::print()
{

}

Department::~Department()
{

	cout<<"Deleting Department: "<<this->getName()<<endl;
	if (false){
		//lol
	}

}

void Department::delet()
{

}
