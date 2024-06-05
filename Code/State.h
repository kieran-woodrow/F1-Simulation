#if !defined(STATE_H)
#define State_H

#include <iostream>

using namespace std;
class Race;
class State {
  public:
    virtual void handleChange(Race* c) = 0;
    virtual string getCurrentCompound() = 0;
};

#endif
