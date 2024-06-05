#include "Race.h"
#include <iomanip>
//#include <bits/stdc++.h> 
//#include "State.h"
Race::Race() {
    
    //std::cout << "Constructor 1 called" << endl;
    state = new softTyreCompound();  //Start with soft tyres

}

Race::Race(Competitors* c){

    this->comp=c;
}

Race::~Race() {

    //std::cout << "Destructor called" << endl;
    delete state;
    state = 0;
}


void Race::setState(State* state_) {

    //std::cout << "setState called" << endl;
    delete state;
    state = state_;
}

void Race::setCompetitors(Competitors* c)
{
    comp=c;
}
void Race::setTrack(Track* t){  

   //std::cout << "setTrack called" << endl;
   trackName = t;

}

void Race::change() {
    state->handleChange(this);
}

string Race::getCurrentCompound() {
    return state->getCurrentCompound();
}

Track* Race::getTrack(){
    return trackName;
}

void Race::StartRacing(){
    int arrPoints[10]={25,18,15,12,10,8,6,4,2,1};
    std::cout << "\033[1;32m";
    std::cout<<" The RACE has begun!"<<endl;
    std::cout << "\033[1;35m";
    std::cout <<" ~~~~~~~~~~~~~~~~~~~\n\n";

    std::cout << "\033[1;36m";
    std::cout << "The starting grid positions of the cars as a result of the qualifiers:\n";
    std::cout << "\033[1;34m";
    std::cout << "======================================================================\n";
    std::cout << "\033[1;36m";

    int w = 30;
    char s = ' ';

    std::cout << left << setw(w) << setfill(s) << "Car" << setw(w) << setfill(s) << "Grid Position";
    std::cout << endl;
    std::cout << "\033[1;30m";
    for (int i = 0; i < comp->getQualifiedCars().size(); ++i) {
      std::cout<<left << setw(w) << setfill(s) << comp->getQualifiedCars()[i]->getCarName() << setw(w) << setfill(s) <<comp->getQualifiedCars()[i]->getPositionStart() <<"\n";
    }

    std::cout << "\033[1;37m";
    std::cout<<"\nThe Cars are racing...\n"<<endl;
    std::cout << "\033[1;35m";

    std::cout << "\033[1;35m";
    std::cout<<"The Race has completed! \n"<<endl;
    std::cout << "\033[1;36m";
    std::cout << " Results:\n";
    std::cout << "\033[1;34m";
    std::cout << "~~~~~~~~~~\n";


    float* f=getRandomRacingTimesForCars();
    float lowest=1000000;
    float smallest=0;
    Car* c;
    int j=0;
    int position=0;
    std::cout << "\033[1;36m";
    std::cout << left << setw(12) << setfill(' ') << "Position" << setw(20) << setfill(' ') << "Car" << setw(15) << setfill(' ') << "time" << setw(10) << setfill(' ') << "points";
    std::cout << endl;

    vector<float> times;
    for (int i = 0; i < 10; i++){
        times.push_back(f[i]);
    }
    sort(times.begin(), times.end());

    for(int k=0;k<10;k++){
        float a;
        for(int i=0;i<comp->getQualifiedCars().size();i++){
            a=(*(f+i));
            if(a<lowest && a>smallest){
                lowest=a;
                j=i;
            c=comp->getQualifiedCars()[i];
            }
            
        }

        if (position == 0) std::cout << "\033[1;32m";
        if (position == 1) std::cout << "\033[1;33m";
        if (position == 2) std::cout << "\033[1;31m";
        if (position > 2) std::cout << "\033[1;30m";

        position++;
        smallest=lowest;
        c->setPlaceMent(position);
        c->addTotalPoints(arrPoints[position-1]);
        
        std::cout << left << setw(12) << setfill(' ') << position << setw(20) << setfill(' ') << c->getCarName() << 
        setw(15) << setfill(' ') << times.at(k) << setw(10) << setfill(' ') << arrPoints[position - 1] << endl; 
        
        lowest=1000000;
    }
    std::cout << "\033[1;37m";
    std::cout << endl;
    std::cout << "The points have been added to the drivers seasons scores.\n\n";

    vector<Car*> q = comp->getQualifiedCars();

    
    for (int i = 0; i < q.size(); i++){
        for (int p = 0; p < q[i]->getParts().size(); p++){
            int k= (rand() % 10) + 5;
            q[i]->getParts()[p]->setDurability(q[i]->getParts()[p]->getDurability() - k);
        }
    }
}


float* Race::getRandomRacingTimesForCars(){
    static float r[11];
    for (int i = 0; i < comp->getQualifiedCars().size(); ++i) {
      r[i] = (float(rand())/float((RAND_MAX)) * 50.0) +40.05;
      //std::cout <<comp->getQualifiedCars()[i]->getCarName()<<" time for race was: "<< r[i] << endl;
    }

   return r;
}