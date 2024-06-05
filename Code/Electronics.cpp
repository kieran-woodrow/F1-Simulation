#include "Electronics.h"
Electronics::Electronics(Car* c, Container* con)
{

	Department::setCar(c);
	Department::setName("Electronics");
	container=con;

}

void Electronics::addPart(string p)
{

	Car* c = Department::getComponent();
	CarPartMaker* cp= new CarPartMaker(p);
	bool loop = false;

	while(loop==false)
	{
		bool successfulSimulation= Department::runSimulation(cp->getCarPart(), this->getComponent()->getCarPart(p));

		if(successfulSimulation==true)
		{
			c->removePart(p);
			if(container!=NULL)
			container->removeContainerItem(p);
			cout << "\033[1;32m";
			cout<< cp->getName() << " has been successfully added to the "<<this->getComponent()->getCarName()<<" Formula 1 car"<<endl;
			cout << "\033[1;37m";
			c->addPart(cp->getCarPart());

			if(container!=NULL)
			container->constructContainer(cp);
			
			loop=true;
		}
		else
		{
			cout << "\033[1;31m";
			cout<< cp->getName() << " has failed the car part simulation and won't be added to the "<<this->getComponent()->getCarName()<<" Formula 1 car"<<endl;
			cout << "\033[1;37m";
			cp= new CarPartMaker(p);
		}
	}

}

void Electronics::print()
{
	cout << "\033[1;33m";
	cout<<"Electronics department working on: "<<this->getComponent()->getCarName()<<endl;
	cout << "\033[1;37m";
}
