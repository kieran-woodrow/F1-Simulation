#include "Driver.h"
Driver::Driver(string n)
{
    name=n;
    setAge();
    setExperience();
}

string Driver::getName()
{
    return name;

}

void Driver::setAge()
{
    age= (rand() % 30) + 18;

}

int Driver::getAge()
{
    return age;

}

void Driver::setExperience()
{
    int i=0;
    for(i;i<tracks.size();i++)
	{
		
	}

    i++;

    if(i < 10)
    {
        experience= "Intermediate Driver";
    }
    else if( i >=10 && i < 30)
    {
        experience= "Professional Driver";
    }
    else if( i>=30)
    {
        experience= "Experienced Driver";
    }
}

string Driver::getExperience()
{

    return experience;
}

void Driver::addTrack(Track* t)
{

    if(getNumTimesDrivenOnTrack(t->getInfo("name")) ==0)
    {
        uniquetracks.push_back(t->getInfo("name"));
    }
    tracks.push_back(t->getInfo("name"));
    setExperience();


}

/*Track* Driver::getTrack(string t)
{
    int i=0;
    for(i;i<tracks.size();i++)
	{
		if(tracks.at(i)->getInfo("name")== t)
        {
            return tracks.at(i);
        }
	}
    return NULL;
}*/

void Driver::runSimulation(Track* t)
{
    int num= getNumTimesDrivenOnTrack(t->getInfo("name"));

    cout << "\033[1;36m";
    cout<<"\nRunning track simulation for "<<getName()<<" on the "<<t->getInfo("name")<<""<<endl;
    cout << "\033[1;34m";
    cout << "=============================================================\n\n";
    cout << "\033[1;37m";

    cout << "\033[1;30m";
    cout<<getTrackExperience(t->getInfo("name"))<<endl;
    cout << "\033[1;37m";

    command= new TrackSimulatorCommand(num, t);
    cout<<endl;
    command->execute();
    cout<<endl;
    addTrack(t);
    setExperience();
}

string Driver::getTrackExperience(string t)
{
    int i=0;
    int count=0;
    for(i;i<tracks.size();i++)
	{
		if(tracks.at(i)== t)
        {
            count++;
        }
	}
    if(count==0)
    {
        string temp= getName()+ " has never driven on the "+ t + ".";
        return temp;
    }
    else if(count < 4)
    {
        string temp= getName()+ " has only driven a few times on this track and isn't well experienced on the "+ t + ".";
        return temp;
    }
    else if( count >=4 && count < 10)
    {
        string temp= getName()+ " has driven enough on the "+ t + " to have an intermediate understanding of it.";
        return temp;
    }
    else if( count>=10)
    {
        string temp= getName()+ " is experienced on the "+ t + " and has an expert understanding of it";
        return temp;
    }

    return "";
}

int Driver::getNumTimesDrivenOnTrack(string t)
{
    int i=0;
    int count=0;
    for(i;i<tracks.size();i++)
	{
		if(tracks.at(i)== t)
        {
            count++;
        }
	}
    
    return count;
}

/*void Driver::addCar(Car* c)
{
    car=c;
}*/

void Driver::printDriverInfo()
{
    cout << "\033[1;34m";
    cout<<getName()<<" Information:"<<endl;
    cout<<endl;
    cout << "\033[1;36m";
    cout<<"Age: "<< getAge()<<endl;
    cout<<"Experience level: "<<getExperience()<<endl;
    cout<<"Total Season Points: "<<getTotalPoints()<<endl;
    cout << "\033[1;34m";
    cout<<"Tracks Driven On: "<<endl;
    cout << "\033[1;36m";
    int i=0;
    for(i;i<uniquetracks.size();i++)
	{
		cout<<uniquetracks.at(i)<<" x"<<getNumTimesDrivenOnTrack(uniquetracks.at(i))<<endl;
	}
    cout<<endl;
    cout << "\033[1;37m";

}

void Driver::print(){}

void Driver::setTotalPoints(int a)
{
    totalPoints= a;
}
int Driver::getTotalPoints()
{
    return totalPoints;
}

/*void Driver::setCar(Car* c)
{
    car=c;
}
Car* Driver::getCar()
{
    return car;
}*/