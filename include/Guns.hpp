//#pragma once

#ifndef GUNS_HPP
#define GUNS_HPP

#include <cstdint>
#include <string>
#include <iostream>

using u32 = uint32_t;


//---------------------------- 1st layer ----------------------------


class Guns{
private:
    u32 damage_per_bullet_;
    u32 fire_rate_;
    u32 magazine_size_;
    u32 reload_time_;
    std::string camouflage_name_;
public:
    Guns();

    void SetDamagePerBullet( u32 damage_per_bullet );
    void SetFireRate( u32 fire_rate );
    void SetMagazineSize( u32 magazine_size );
    void SetReloadTime( u32 reload_time );
    void SetCamouflageName( std::string camouflage_name );

    u32 GetDamagePerBullet() const;
    u32 GetFireRate() const;
    u32 GetMagazineSize() const;
    u32 GetReloadTime() const;
    std::string const GetCamouflageName() const;

    virtual void ShowSpecifications() const = 0;
    virtual void ShowTotalPower() const = 0;
    virtual u32 GetTotalPower() const = 0;
};


//---------------------------- 2nd layer ----------------------------


class Shotguns: public Guns{
private:
    u32 fraction_radius_;
public:
    Shotguns();

    void SetFractionRadius( u32 fraction_radius );
    u32 GetFractionRadius() const;
};


class Pistols: public Guns{
private:
    u32 max_distance_;
public:
    Pistols();
    void SetMaxDistance( u32 max_distance );
    u32 GetMaxDistance() const;
};


class RifleGuns: public Guns{
private:
    u32 sight_multiplicity_;
public:
    RifleGuns();
    void SetSightMultiplicity( u32 sight_multiplicity );
    u32 GetSightMultiplicity() const;

};


class SemiAutomaticRifles: public Guns{
private:
    u32 comfortness_;
public:
    SemiAutomaticRifles();
    void SetComfortness( u32 comfortness );
    u32 GetComfortness() const;
};


class AssaultRifles: public Guns{
private:
    u32 weight_;
public:
    AssaultRifles();
    void SetWeight( u32 weight );
    u32 GetWeight() const;
};



//---------------------------- 3rd layer ----------------------------

//---------------------------- Shotguns -----------------------------


class SASG: public Shotguns{
private:

public:
    SASG(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time,  u32 fraction_radius, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


class Bizon: public Shotguns{
private:

public:
    Bizon(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time,  u32 fraction_radius, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


//---------------------------- Pistols ----------------------------


class Tacops: public Pistols{
private:

public:
    Tacops(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 max_distance, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


class Muesoc: public Pistols{
private:

public:
    Muesoc(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 max_distance, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


//---------------------------- Rifle guns ----------------------------


class CSRX: public RifleGuns{
private:

public:
    CSRX(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 sight_multiplicity, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


class M870: public RifleGuns{
private:

public:
    M870(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 sight_multiplicity, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


//---------------------------- SemiAutomaticRifles ----------------------------


class commando: public SemiAutomaticRifles{
private:

public:
    commando(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 comfortness, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


class mpx: public SemiAutomaticRifles{
private:

public:
    mpx(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 comfortness, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


//---------------------------- AssaultRifles ----------------------------


class Ak47: public AssaultRifles{
private:

public:
    Ak47(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 weight, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


class Ak74: public AssaultRifles{
private:

public:
    Ak74(u32 damage_per_bullet, u32 fire_rate, u32 magazine_size, u32 reload_time, u32 weight, std::string camouflage_name);
    void ShowSpecifications() const override;
    void ShowTotalPower() const override;
    u32 GetTotalPower() const override;
};


//---------------------------- Functions ----------------------------

void CompareTwoGuns( Guns * gun_1, Guns * gun_2 );


#endif // ifndef GUNS_HPP