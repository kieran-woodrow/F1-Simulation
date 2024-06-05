#ifndef CARSTORE_H
#define CARSTORE_H

#include "StoredCar.h"
#include "Car.h"


class CarStore{
  
    public:
        CarStore();
        void saveStateToMemento(StoredCar* memento);
        StoredCar* getStateFromMemento();
    private:
       StoredCar* _mem;

    
    
  

};

#endif