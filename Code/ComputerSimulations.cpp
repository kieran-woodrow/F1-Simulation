#include "ComputerSimulations.h"
#include <iomanip>


ComputerSimulations::ComputerSimulations(Car *c):Testing(c){
    this->car=c;
   // cout<<"Car "<<c->getCarName()<<" is going to be tested with ComputerSimulations "<<endl;
}

void ComputerSimulations::CalculateAverageSpeedDifference(){
    vector<CarPart*> parts=car->getParts();
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

void ComputerSimulations::CalculateEachPartAddition(){
   overallSpeed=0;
    int c=0;
     vector<CarPart*> parts=car->getParts();
     vector<CarPart*> addspeed;
     vector<CarPart*> nospeed;
     for(auto it = parts.begin(); it != parts.end(); ++it){
         int a=(*it)->getEfficiency() - randomNumberGenerator();
         if(a<60){
             nospeed.push_back(*it);
         }
         else{

            addspeed.push_back(*it);
         }
        c++;
     }

    cout << "\033[1;36m";
    cout << " Parts that are estimated to increase the cars performance:\n";
    cout << "\033[1;34m";
    cout << "===========================================================\n";
    for (int i = 0; i < addspeed.size(); i++){
        
        cout << "\033[1;37m";
        int a = addspeed.at(i)->getEfficiency();
        float b = a/100.00;
        overallSpeed=overallSpeed+b;
        
        cout << " " << addspeed.at(i)->getName() << "\n";
    }

    cout << endl;
    cout << "\033[1;36m";
    cout << " Parts that are estimated to have no significant effect on the performance:\n";
    cout << "\033[1;34m";
    cout << "===========================================================================\n";
    cout << "\033[1;31m";
    for (int i = 0; i < nospeed.size(); i++){
        cout << " " << nospeed.at(i)->getName() << "\n";
    }
    cout << "\033[1;37m";


}

void ComputerSimulations::ShowAllPartsEfficeny(){

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
     vector<CarPart*> parts=car->getParts();
     cout << endl;
     for(auto it = parts.begin(); it != parts.end(); ++it){
         float b=this->randomNumberGenerator();
         float a=(*it)->getEfficiency()-b;
         if (a < 70) cout << "\033[1;31m";
         else if (a > 69) cout << "\033[1;32m";
         cout << left << setw(nw) << setfill(s) <<(*it)->getName();
         cout << left << setw(nw) << setfill(s) << a << endl;
     }

    cout << "\033[1;34m";
    for (int i = 0; i < 40; i++) cout << "=";
    cout << endl;
    cout << "\033[1;37m";


}

string ComputerSimulations::getName(){
    return "Computer Simulations";
}

float ComputerSimulations::randomNumberGenerator(){
    float randomNumber =(float(rand())/float((RAND_MAX)) * 0.5) -1;
    return randomNumber;
}