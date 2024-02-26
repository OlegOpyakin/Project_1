#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

commando::commando(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 comfortness, std::string camouflage_name){
    std::cout << "Commando has been created\n";
    SetDamagePerBullet(damage_per_bullet);
    SetFireRate(fire_rate);
    SetMagazineSize(magazine_size);
    SetReloadTime(reload_time);
    SetComfortness(comfortness);
    SetCamouflageName(camouflage_name);
}

void commando::ShowSpecifications() const{
    std::cout << "Damage per bullet value: " << GetDamagePerBullet() << "\n";
    std::cout << "Fire rate value: " << GetFireRate() << "\n";
    std::cout << "Magazine size value: " << GetMagazineSize() << "\n";
    std::cout << "Reload time: " << GetReloadTime() << "\n";
    std::cout << "Comfortness value: " << GetComfortness() << "\n";
    std::cout << "Camouflage: " << GetCamouflageName() << "\n";
}

void commando::ShowTotalPower() const{
    u32 total_power = 12 * GetDamagePerBullet() + 16 * GetFireRate() + 6 * GetMagazineSize() + 7 * GetReloadTime() + 14 * GetComfortness();
    std::cout << "Total power: " << total_power << "\n";
}

u32 commando::GetTotalPower() const{
    u32 total_power = 12 * GetDamagePerBullet() + 16 * GetFireRate() + 6 * GetMagazineSize() + 7 * GetReloadTime() + 14 * GetComfortness();
    return total_power;
}