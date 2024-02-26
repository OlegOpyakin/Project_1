#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

M870::M870(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 sight_multiplicity, std::string camouflage_name){
    std::cout << "M870 has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetSightMultiplicity(sight_multiplicity);
    SetCamouflageName(camouflage_name);
}

void M870::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Sight multiplicity value: " << GetSightMultiplicity() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void M870::ShowTotalPower() const{
    u32 total_power = 25 * GetDamagePerBullet() + 3 * GetFireRate() + 6 * GetMagazineSize() + 2 * GetReloadTime() + 7 * GetSightMultiplicity();
    std::cout << "Total power: " << total_power << "\n";
}

u32 M870::GetTotalPower() const{
    u32 total_power = 25 * GetDamagePerBullet() + 3 * GetFireRate() + 6 * GetMagazineSize() + 2 * GetReloadTime() + 7 * GetSightMultiplicity();
    return total_power;
}