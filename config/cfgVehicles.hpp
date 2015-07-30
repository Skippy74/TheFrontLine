class CfgVehicles {
    class B_Soldier_F;
    class TFL_Unit : B_Soldier_F {
        uniformClass = "U_BasicBody"; 
        displayName = "TFL unit";
        attendant = 1;
        engineer = 1;
        Items[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ItemGps","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemGps","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
};