#if !defined(SOFTTYRECOMPOUND_H)
#define SOFTTYRECOMPOUND_H

#include <iostream>
#include "State.h"
#include "mediumTyreCompound.h"
#include "hardTyreCompound.h"

class softTyreCompound : public State {
  public:
    virtual void handleChange(Race* r);
    virtual string getCurrentCompound();
};

#endif