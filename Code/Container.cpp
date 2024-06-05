#include "Container.h"

Container::Container()
{
    containerID="";
    containerName="";
    containerBuilder=NULL;
}

Container::~Container()
{
    for (auto i = containerItems.begin(); i!= containerItems.end(); i++)
    {
        containerItems.erase(i);
    }
    delete containerBuilder;
    containerBuilder=NULL;
}

void Container::setContainerName(string c)
{
    containerName=c;
}

void Container::setContainerID(string c)
{
    containerID=c;
}

string Container::getContainerName()
{
    return containerName;
}

string Container::getContainerID()
{
    return containerID;
}
void Container::constructContainer(ContainerBuilder* c)
{
    //c->reset();
    //c->setType();
   
   // c->setWeight();
    
    //c->setName();
   
    containerItems.push_back(c->getName());
}

void Container::printContainerItems()
{
    cout<<"CONTAINER " <<containerName<<endl;
    cout<<"CONTAINER ID "<<containerID<<endl;
    cout<<"Items inside: "<<endl;
    for (auto i = containerItems.begin(); i!= containerItems.end(); i++){
      cout << *i << endl;
    }
}

void Container::removeContainerItem(string c)
{
   containerItems.remove(c);
}