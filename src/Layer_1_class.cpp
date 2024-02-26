#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;

Guns::Guns(): damage_per_bullet_(0), fire_rate_(0), magazine_size_(0), reload_time_(0) { std::cout<<"Gun has been created\n"; }

void Guns::SetDamagePerBullet(u32 damage_per_bullet){ damage_per_bullet_ = damage_per_bullet; };

void Guns::SetFireRate(u32 fire_rate){ fire_rate_ = fire_rate; };

void Guns::SetMagazineSize(u32 magazine_size){ magazine_size_ = magazine_size; };

void Guns::SetReloadTime(u32 reload_time){ reload_time_ = reload_time; };

void Guns::SetCamouflageName( std::string camouflage_name ){ camouflage_name_ = camouflage_name; };


u32 Guns::GetDamagePerBullet() const{ return damage_per_bullet_; };

u32 Guns::GetFireRate() const{ return fire_rate_; };

u32 Guns::GetMagazineSize() const{ return magazine_size_; };

u32 Guns::GetReloadTime() const{ return reload_time_; };

std::string const Guns::GetCamouflageName() const{ return camouflage_name_; };