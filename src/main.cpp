#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

int main(){
    
    Ak47 rifle_1( 10, 10, 10, 10, 10, "Default" );
    rifle_1.ShowSpecifications();
    rifle_1.ShowTotalPower();

    std::cout << "-----------------------------------\n";
    
    Ak74 rifle_2( 10, 10, 10, 10, 10, "Default" );
    rifle_2.ShowSpecifications();
    rifle_2.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    Bizon rifle_3( 10, 10, 10, 10, 10, "Default" );
    rifle_3.ShowSpecifications();
    rifle_3.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    commando rifle_4( 10, 10, 10, 10, 10, "Default" );
    rifle_4.ShowSpecifications();
    rifle_4.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    CSRX rifle_5( 10, 10, 10, 10, 10, "Default" );
    rifle_5.ShowSpecifications();
    rifle_5.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    M870 rifle_6( 10, 10, 10, 10, 10, "Default" );
    rifle_6.ShowSpecifications();
    rifle_6.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    mpx rifle_7( 10, 10, 10, 10, 10, "Default" );
    rifle_7.ShowSpecifications();
    rifle_7.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    Muesoc rifle_8( 10, 10, 10, 10, 10, "Default" );
    rifle_8.ShowSpecifications();
    rifle_8.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    SASG rifle_9( 10, 10, 10, 10, 10, "Default" );
    rifle_9.ShowSpecifications();
    rifle_9.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    Tacops rifle_10( 10, 10, 10, 10, 10, "Default" );
    rifle_10.ShowSpecifications();
    rifle_10.ShowTotalPower();

    std::cout << "-----------------------------------\n";

    CompareTwoGuns( &rifle_1, &rifle_2 );
}