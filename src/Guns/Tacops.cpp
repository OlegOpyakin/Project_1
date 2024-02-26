#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

Tacops::Tacops(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 max_distance, std::string camouflage_name){
    std::cout << "Tacops has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetMaxDistance(max_distance);
    SetCamouflageName(camouflage_name);
}

void Tacops::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Maximum distance value: " << GetMaxDistance() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void Tacops::ShowTotalPower() const{
    u32 total_power = 1 * GetDamagePerBullet() + 15 * GetFireRate() + 7 * GetMagazineSize() + 6 * GetReloadTime() + 7 * GetMaxDistance();
    std::cout << "Total power: " << total_power << "\n";
}

u32 Tacops::GetTotalPower() const{
    u32 total_power = 1 * GetDamagePerBullet() + 15 * GetFireRate() + 7 * GetMagazineSize() + 6 * GetReloadTime() + 7 * GetMaxDistance();
    return total_power;
}