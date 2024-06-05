#include "Day.h"

void Day::handle(string day, Car* car){
    if (successor){

        successor->handle(day, car);

    } else {
        cout << "\033[1;35m";
        cout << "End of race weekend.\n\n";
        cout << "\033[1;37m";
    }
}