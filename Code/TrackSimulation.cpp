#include "TrackSimulation.h"

bool TrackSimulation::runTrackSimulation(int xp, Track* track)
{
    cout << "\033[1;34m";
    cout<<"The "<<track->getInfo("name")<<" Information:"<<endl;
    cout << "\033[1;36m";
    cout <<"Track Name: " << track->getInfo("name") <<endl;
    cout<< "Track Compound: " << track->getInfo("compound")<<endl;
    cout << "\033[1;34m";
    cout<<"\nMap Of The Track:"<<endl;
    cout << "\033[1;37m";
    track->showTrackMap();
    cout << "\033[1;36m";
    cout << "Total Distance Of Track: \033[1;37m" << track->getTotalDistance() <<"m\033[1;36m"<<endl;
    cout<<"Total Straight Distance Of Track: \033[1;37m" << track->getStraightDistance() << "m\033[1;36m"<<endl;
    cout<<"Total Turn Distance Of Track: \033[1;37m" << track->getTurnDistance() << "m\033[1;36m"<<endl;

    cout << "\033[1;36m";
    if(xp<2)
    {
        int perc= (rand() % 15) + 5;
        cout<<"The driver is \033[1;37m"<<perc<<"%\033[1;36m knowledgeable of the \033[1;37m"<<track->getInfo("name")<<""<<endl;
    }
    else if(xp < 4)
    {
        int perc= (rand() % 20) + 20;
        cout<<"The driver is \033[1;37m"<<perc<<"%\033[1;36m knowledgeable of the \033[1;37m"<<track->getInfo("name")<<""<<endl;
    }
    else if(xp >=4 && xp < 10)
    {
        int perc= (rand() % 40) + 40;
        cout<<"The driver is \033[1;37m"<<perc<<"%\033[1;36m knowledgeable of the \033[1;37m"<<track->getInfo("name")<<""<<endl;
    }
    else if(xp>=10)
    {
        int perc= (rand() % 20) + 80;
        cout<<"The driver is \033[1;37m"<<perc<<"%\033[1;36m knowledgeable of the \033[1;37m"<<track->getInfo("name")<<""<<endl;
    }

    return true;
}