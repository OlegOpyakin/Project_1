#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

void CompareTwoGuns( Guns * gun_1, Guns * gun_2 ) {

    if(gun_1->GetTotalPower() == gun_2->GetTotalPower()){
        std::cout << "Guns have the same power\n";
    }

    if(gun_1->GetTotalPower() > gun_2->GetTotalPower()){
        std::cout << "First gun is stronger\n";
    }

    if(gun_1->GetTotalPower() < gun_2->GetTotalPower()){
        std::cout << "Second gun is stronger\n";
    }
};