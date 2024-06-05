#include "Testing.h"
#include <iostream>
using namespace std;
Testing::Testing(Car* c):car(c){
}

void Testing::StartTesting(){

    cout << "\033[1;37m";
    cout<<"Results of testing for car: \033[1;32m" << car->getCarName()<<"\033[1;37m have\nbeen produced by \033[1;32m"
    <<getName()<< "\033[1;37m and are shown below:" << "\n"<<endl;

    ShowAllPartsEfficeny();
    cout<<endl;
    CalculateEachPartAddition();
    cout<<endl;
    cout << "\033[1;34m";
    cout<<getName()<<" has produced a final conclusion on the overall effect of the cars components: "<<endl;
    cout << "\033[1;37m";
    CalculateAverageSpeedDifference();
    cout<<endl;

}