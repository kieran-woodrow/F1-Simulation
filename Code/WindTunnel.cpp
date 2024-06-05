#include "WindTunnel.h"
#include <iomanip>

WindTunnel::WindTunnel(Car *c):Testing(c){
    this->car_=c;
    //cout<<"Car "<<c->getCarName()<<" is going to be tested with WindTunnel "<<endl;
    //cout<<"Current amount of tokens left for season: "<<this->tokens<<endl;
    overallSpeed=0;
}

void WindTunnel::CalculateAverageSpeedDifference(){
     vector<CarPart*> parts=car_->getParts();
     int c=0;
     float a=0;
     for(auto it = parts.begin(); it != parts.end(); ++it){
         int b=(*it)->getEfficiency();
         float f=b/100.0;
         if(f>=0.5){
         a=a+f;
         c++;
         }
         
     } 
    cout << "\033[1;37m";
     if(overallSpeed>=0){
         cout<<"The net increase of performance of the car is "<<a<<"%"<<endl;
     }
     else{
          cout<<"The performance of the car has not been increased."<<endl;
     }
     cout << "\033[1;37m";
}

void WindTunnel::CalculateEachPartAddition(){
    overallSpeed=0;
    int c=0;
     vector<CarPart*> parts=car_->getParts();
     vector<CarPart*> addspeed;
     vector<CarPart*> nospeed;

     for(auto it = parts.begin(); it != parts.end(); ++it){
         int a=(*it)->getEfficiency();
         if(a<60){
             //cout<<(*it)->getName()<<" didnt add any speed to the car_"<<endl;
             nospeed.push_back(*it);
         }
         else{
             //float b=a/100.00;
             //cout<<(*it)->getName()<<" increased speed of car_ by "<<b<<"%"<<endl;
            //overallSpeed=overallSpeed+b;
            addspeed.push_back(*it);
         }
        tokens--;
        c++;
     }

    cout << "\033[1;36m";
    cout << " Parts that had a net increase on the cars performance:\n";
    cout << "\033[1;34m";
    cout << "========================================================\n";
    for (int i = 0; i < addspeed.size(); i++){
        
        cout << "\033[1;37m";
        int a = addspeed.at(i)->getEfficiency();
        float b = a/100.00;
        overallSpeed=overallSpeed+b;

        string co = "\033[1;33m";
        if (addspeed.at(i)->getEfficiency() > 79) co = "\033[1;32m";
        cout << " " << addspeed.at(i)->getName() << ", by "<< co << b << "%\n";
    }

    cout << endl;
    cout << "\033[1;36m";
    cout << " Parts that did not increase the speed of the car:\n";
    cout << "\033[1;34m";
    cout << "===================================================\n";
    cout << "\033[1;31m";
    for (int i = 0; i < nospeed.size(); i++){
        cout << " " << nospeed.at(i)->getName() << "\n";
    }
    cout << "\033[1;37m";
    
    cout << endl;
    cout << "\033[1;36m";
    cout << " Wind Tunnel Tokens:\n";
    cout << "\033[1;34m";
    cout << "====================\n";
    cout << "\033[1;36m";
    cout<< left << setw(15) << setfill(' ') << " used:" << left << setw(10) << setfill(' ') << c << endl;
    cout<< left << setw(15) << setfill(' ') << " remaining:" << left << setw(10) << setfill(' ') << tokens << endl;
    cout << "\033[1;37m";
}

void WindTunnel::ShowAllPartsEfficeny(){
     int nw = 30;
     int numw = 3;
     char s = ' ';

    cout << "\033[1;36m";
    cout << " Car Part Efficiency Table:\n";
    cout << "\033[1;34m";
    for (int i = 0; i < 40; i++) cout << "=";
    cout << endl;

     cout << "\033[1;36m";

     cout<< left << setw(nw) << setfill(s) << " Part";
     cout<< left << setw(numw) << setfill(s) << "Efficiency";

     vector<CarPart*> parts = car_->getParts();
     cout << endl;
     
     for(auto it = parts.begin(); it != parts.end(); ++it){
         if ((*it)->getEfficiency() < 60) cout << "\033[1;31m";
         else if ((*it)->getEfficiency() < 80) cout << "\033[1;33m";
         else if ((*it)->getEfficiency() > 79) cout << "\033[1;32m";
         
         cout<< left << setw(nw) << setfill(s) << (*it)->getName();
         
         cout<< left << setw(numw) << setfill(s) <<(*it)->getEfficiency()<<endl;
     }

    cout << "\033[1;34m";
    for (int i = 0; i < 40; i++) cout << "=";
    cout << endl;
    cout << "\033[1;37m";
     

}
void WindTunnel::resetTokens(){
    cout << "\033[1;34m";
    cout<<"New Season: Tokens reset to 400"<<endl;
    tokens=400;

}

string WindTunnel::getName(){
    return "WindTunnel";
}

void WindTunnel::setCar(Car* c){
    
    Testing::setCar(c);
    car_ = c;
}
