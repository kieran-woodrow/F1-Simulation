#if !defined(MEDIUMTYRECOMPOUND_H)
#define MEDIUMTYRECOMPOUND_H

#include <iostream>
//#include "State.h"
#include "softTyreCompound.h"
#include "hardTyreCompound.h"

class mediumTyreCompound : public State {
  public:
    virtual void handleChange(Race* r);
    virtual string getCurrentCompound();
};

#endif