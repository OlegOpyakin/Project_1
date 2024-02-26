#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

Ak47::Ak47(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 weight, std::string camouflage_name){
    std::cout << "Ak47 has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetWeight(weight);
    SetCamouflageName(camouflage_name);
}

void Ak47::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Weight value: " << GetWeight() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void Ak47::ShowTotalPower() const{
    u32 total_power = 11 * GetDamagePerBullet() + 10 * GetFireRate() + 12 * GetMagazineSize() + 15 * GetReloadTime() + 9 * GetWeight();
    std::cout << "Total power: " << total_power << "\n";
}

u32 Ak47::GetTotalPower() const{
    u32 total_power = 11 * GetDamagePerBullet() + 10 * GetFireRate() + 12 * GetMagazineSize() + 15 * GetReloadTime() + 9 * GetWeight();
    return total_power;
}