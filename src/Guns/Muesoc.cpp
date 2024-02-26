#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

Muesoc::Muesoc(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 max_distance, std::string camouflage_name){
    std::cout << "Muesoc has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetMaxDistance(max_distance);
    SetCamouflageName(camouflage_name);
}

void Muesoc::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Maximum distance value: " << GetMaxDistance() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void Muesoc::ShowTotalPower() const{
    u32 total_power = 5 * GetDamagePerBullet() + 3 * GetFireRate() + 6 * GetMagazineSize() + 9 * GetReloadTime() + 7 * GetMaxDistance();
    std::cout << "Total power: " << total_power << "\n";
}

u32 Muesoc::GetTotalPower() const{
    u32 total_power = 5 * GetDamagePerBullet() + 3 * GetFireRate() + 6 * GetMagazineSize() + 9 * GetReloadTime() + 7 * GetMaxDistance();
    return total_power;
}