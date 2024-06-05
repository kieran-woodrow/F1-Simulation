#if !defined(HARDTYRECOMPOUND_H)
#define HARDTYRECOMPOUND_H

#include <iostream>
//#include "State.h"
#include "softTyreCompound.h"
#include "mediumTyreCompound.h"

class hardTyreCompound : public State {
  public:
    virtual void handleChange(Race* r);
    virtual string getCurrentCompound();
};

#endif