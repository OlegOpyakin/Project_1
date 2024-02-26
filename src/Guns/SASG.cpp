#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

SASG::SASG(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 fraction_radius, std::string camouflage_name){
    std::cout << "SASG has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetFractionRadius(fraction_radius);
    SetCamouflageName(camouflage_name);
}

void SASG::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Fraction radius value: " << GetFractionRadius() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void SASG::ShowTotalPower() const{
    u32 total_power = 12 * GetDamagePerBullet() + 8 * GetFireRate() + 13 * GetMagazineSize() + 14 * GetReloadTime() + 6 * GetFractionRadius();
    std::cout << "Total power: " << total_power << "\n";
}

u32 SASG::GetTotalPower() const{
    u32 total_power = 12 * GetDamagePerBullet() + 8 * GetFireRate() + 13 * GetMagazineSize() + 14 * GetReloadTime() + 6 * GetFractionRadius();
    return total_power;
}