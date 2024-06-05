#include "CarPartSimulation.h"

bool CarPartSimulation::runCarPartCheck(CarPart* cp, CarPart* old)
{
    cout << "\033[1;34m";
    cout<<"Running new "<<cp->getName()<<" through the simulation"<<endl;
    cout << "\033[1;37m";
    cout<<endl;
    if(old!=NULL)
    {
        cout << "\033[1;36m";
        cout<<"New "<<cp->getName()<<" Specs: "<<endl;
        cout << "\033[1;32m";
        cp->print();
        cout<<endl;
        cout << "\033[1;36m";
        cout<<"Current "<<cp->getName()<<" Specs: "<<endl;
        cout << "\033[1;33m";
        old->print();
        cout << "\033[1;37m";
        cout<<endl;

        if(cp->getQuality() >= 30)
        {
            cout << "\033[1;34m";
            cout<<"Check 1: "<<endl;
            cout << "\033[1;32m";
            cout<<cp->getName()<<" meets the requirements and is compatible with the car"<<endl;
            cout << "\033[1;37m";
            cout<<endl;
            if(cp->getQuality() > old->getQuality())
            {
                cout << "\033[1;34m";
                cout<<"Check 2: "<<endl;
                cout << "\033[1;32m";
                cout<<cp->getID()<<" : "<<cp->getName()<<" is of better quality than the current part "<<old->getID()<<" : "<<old->getName()<<endl;
                cout << "\033[1;37m";
                cout<<endl;
                return true;
            }
            else
            {
                cout << "\033[1;34m";
                cout<<"Check 2: "<<endl;
                cout << "\033[1;31m";
                cout<<cp->getName()<<" is of less quality than the current "<< old->getName()<<endl;
                cout << "\033[1;37m";
                cout<<endl;
                return false;
            }
            
            
        }
        else
        {
            cout << "\033[1;34m";
            cout<<"Check 1: "<<endl;
            cout << "\033[1;31m";
            cout<<cp->getName()<<" has failed the first check and doesn't meet the requirements for this car"<<endl;
            cout << "\033[1;37m";
            cout<<endl;
            return false;
        }
    }
    else
    {
        cout << "\033[1;34m";
        cout<<"New "<<cp->getName()<<" Specs: "<<endl;
        cout << "\033[1;36m";
        cp->print();
        cout << "\033[1;37m";
        cout<<endl;
        if(cp->getQuality() >= 30)
        {
            cout << "\033[1;34m";
            cout<<"Check 1: "<<endl;
            cout << "\033[1;32m";
            cout<<cp->getName()<<" meets the requirements and is compatible with the car"<<endl;
            cout << "\033[1;36m";
            cout<<"No check 2 because this is the first time this part is being added to the car"<<endl;
            cout << "\033[1;37m";
            cout<<endl;
            return true;
            
        }
        else
        {
            cout << "\033[1;34m";
            cout<<"Check 1: "<<endl;
            cout << "\033[1;31m";
            cout<<cp->getName()<<" has failed the first check and doesn't meet the requirements for this car"<<endl;
            cout << "\033[1;37m";
            cout<<endl;
            return false;
        }
    }
    
    
    
}