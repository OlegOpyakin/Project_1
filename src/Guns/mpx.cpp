#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

mpx::mpx(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 comfortness, std::string camouflage_name){
    std::cout << "mpx has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetComfortness(comfortness);
    SetCamouflageName(camouflage_name);
}

void mpx::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Comfortness value: " << GetComfortness() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void mpx::ShowTotalPower() const{
    u32 total_power = 7 * GetDamagePerBullet() + 20 * GetFireRate() + 14 * GetMagazineSize() + 6 * GetReloadTime() + 5 * GetComfortness();
    std::cout << "Total power: " << total_power << "\n";
}

u32 mpx::GetTotalPower() const{
    u32 total_power = 7 * GetDamagePerBullet() + 20 * GetFireRate() + 14 * GetMagazineSize() + 6 * GetReloadTime() + 5 * GetComfortness();
    return total_power;
}