#include "hardTyreCompound.h"
#include "Race.h"
void hardTyreCompound::handleChange(Race* r) {
    string componentType = r->getTrack()->getInfo("compound"); //Get string of compound type from trackinfo function using track pointer

    if(componentType == "Medium"){   //If it's medium, change to medium
        r->setState(new mediumTyreCompound()); 

    }else if(componentType == "Hard"){  //If it's hard, change to hard
         r->setState(new hardTyreCompound());
    
    }else{
       r->setState(new softTyreCompound()); //If soft, change to soft
    }
}
string hardTyreCompound::getCurrentCompound() {
    return "Hard Compound";

}