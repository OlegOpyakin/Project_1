#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

CSRX::CSRX(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 sight_multiplicity, std::string camouflage_name){
    std::cout << "CSRX has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetSightMultiplicity(sight_multiplicity);
    SetCamouflageName(camouflage_name);
}

void CSRX::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Sight multiplicity value: " << GetSightMultiplicity() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void CSRX::ShowTotalPower() const{
    u32 total_power = 30 * GetDamagePerBullet() + 1 * GetFireRate() + 5 * GetMagazineSize() + 4 * GetReloadTime() + 5 * GetSightMultiplicity();
    std::cout << "Total power: " << total_power << "\n";
}

u32 CSRX::GetTotalPower() const{
    u32 total_power = 30 * GetDamagePerBullet() + 1 * GetFireRate() + 5 * GetMagazineSize() + 4 * GetReloadTime() + 5 * GetSightMultiplicity();
    return total_power;
}