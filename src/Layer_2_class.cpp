#include "Guns.hpp"
#include <iostream>

using u32 = uint32_t;



Shotguns::Shotguns(): fraction_radius_(0) { std::cout << "shotgun has been created\n"; };

void Shotguns::SetFractionRadius (u32 fraction_radius) { fraction_radius_ = fraction_radius; };

u32 Shotguns::GetFractionRadius() const { return fraction_radius_; };



Pistols::Pistols(): max_distance_(0) { std::cout << "pistol has been created\n"; };

void Pistols::SetMaxDistance( u32 max_distance ) { max_distance_ = max_distance; };

u32 Pistols::GetMaxDistance() const { return max_distance_; };


RifleGuns::RifleGuns(): sight_multiplicity_(0) { std::cout << "rifle gun has been created\n"; };

void RifleGuns::SetSightMultiplicity( u32 sight_multiplicity ) { sight_multiplicity_ = sight_multiplicity; };

u32 RifleGuns::GetSightMultiplicity() const { return sight_multiplicity_; };



SemiAutomaticRifles::SemiAutomaticRifles(): comfortness_(0) { std::cout << "semi automatic rifle has been created\n"; };

void SemiAutomaticRifles::SetComfortness( u32 comfortness ){ comfortness_ = comfortness; };

u32 SemiAutomaticRifles::GetComfortness() const{ return comfortness_; };


AssaultRifles::AssaultRifles(): weight_(0) { std::cout << "assault rifle has been created\n"; };

void AssaultRifles::SetWeight( u32 weight ) { weight_ = weight; };

u32 AssaultRifles::GetWeight() const{ return weight_; };