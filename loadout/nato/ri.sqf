/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
Rifleman - Nato
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_func", "_params"];
switch _func do {
//////////////////////////////////////////////////////////////////////////////
    case "setLoadout": {
        this = player;
        // Gear
        this forceAddUniform "U_B_CombatUniform_mcam";
        this addVest "V_PlateCarrier1_rgr";
        this addHeadgear "H_HelmetB";        
        // Weapon
        this addItemToVest "30Rnd_65x39_caseless_mag";
        this addWeapon "arifle_MX_F";
        this addPrimaryWeaponItem "optic_Hamr";		
        this addItemToVest "16Rnd_9x21_Mag";
        this addWeapon "hgun_P07_F";        
        // Ammo
        this addItemToUniform "FirstAidKit";
        for "_i" from 1 to 2 do {this addItemToUniform "SmokeShell";};
        for "_i" from 1 to 2 do {this addItemToUniform "HandGrenade";};
        for "_i" from 1 to 6 do {this addItemToVest "30Rnd_65x39_caseless_mag";};
    };
};