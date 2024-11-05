#include <iostream>
//#include "constants.h"
//#include "constants.h" // you can put even more than once now because we made a guard (remember, #ifndef)
#include "cylinder.h"

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
// (freeCodeCamp.org)

int main(){

    Cylinder cylinder1(3,4);
    std::cout << "base_radius : " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height : " << cylinder1.get_height() << std::endl;
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}