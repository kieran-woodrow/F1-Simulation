#include "Competitors.h"
#include <iomanip>

Competitors::Competitors(vector<Car*> c){
    this->cars=c;
}

vector<Car*> Competitors::qualify(){
    float* f=getRandomQualifyingTimesForCars();
    vector<Car*> qualifiedCars;
    float lowest=1000000;
    float smallest=0;
    Car* c;
    int j=0;
    int position=0;
    cout << "\033[1;36m";
    cout << "Top 10 racers qualified:\n";
    cout << "\033[1;34m";
    cout << "========================\n";

    for(int k=0;k<10;k++){
        for(int i=0;i<this->cars.size();i++){
            float a=(*(f+i));
            if(a<lowest && a>smallest){
                lowest=a;
                j=i;
            c=cars[i];
            }
            
        }
        position++;
        smallest=lowest;
        qualifiedCars.push_back(c);
        c->setPositionStart(position);
        if (k == 0) cout << "\033[1;32m";
        if (k == 1) cout << "\033[1;33m";
        if (k == 2) cout << "\033[1;31m";
        if (k > 2) cout << "\033[1;36m";

        cout<< (k + 1) << ". " << c->getCarName() << endl;
        lowest=1000000;
    }
    QualifiedCars=qualifiedCars;
    cout << "\033[1;37m";
    cout << endl;
    return qualifiedCars;
    
}

float* Competitors::getRandomQualifyingTimesForCars(){
    static float r[40];
    cout << "\033[1;36m";
    cout << "The competitors completed the qualifying race with the following times:\n\n"; 
    int w = 25;
    char s = ' ';
    cout << "\033[1;34m";
    cout << left << setw(w) << setfill(s) << "Car" << setw(w) << setfill(s) << "Time";
    cout << endl;
    cout << "\033[1;37m";
    for (int i = 0; i < cars.size(); ++i) {
      r[i] = (float(rand())/float((RAND_MAX)) * 50.0) +40.05;
      cout << left << setw(w) << setfill(s) << cars[i]->getCarName()<< setw(w) << setfill(s) << r[i] << endl;
    }
    cout << "\n";

   return r;
}

vector<Car*> Competitors::getQualifiedCars(){
    return QualifiedCars;
}
