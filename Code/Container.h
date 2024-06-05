#ifndef CONTAINER_H
#define CONTAINER_H

#include "ContainerBuilder.h"
#include "EquipmentMaker.h"
#include <iostream>
#include <string>
#include <list>
//#include <bits/stdc++.h>

using namespace std;

class Container
{
    private:
        list<string> containerItems;
        string containerName;
        string containerID;
        ContainerBuilder* containerBuilder;
	public:

        Container();
        ~Container();
        string getContainerName();
        void setContainerName(string c);
        string getContainerID();
        void setContainerID(string c);
        void constructContainer(ContainerBuilder* c);
        void printContainerItems();
        void removeContainerItem(string c);
};


#endif