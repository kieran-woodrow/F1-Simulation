#include "CarStore.h"
CarStore::CarStore()
{

}

void CarStore::saveStateToMemento(StoredCar* memento)
{

	_mem=memento;

}

StoredCar* CarStore::getStateFromMemento()
{

	return _mem;

}

