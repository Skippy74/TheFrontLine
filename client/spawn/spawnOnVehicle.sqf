/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
spawn player inside vehicle / building
Params:
0: vehicle
-> [vehicle] call TFL_fnc_spawnOnVehicle;
Return:
nothing
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_veh"];
_type = typeOf _veh;

// QG building
if (_type in ["Land_Cargo_HQ_V1_F"]) exitWith { 
    _check = false;
    _posArray = [[1,180],[2,90],[3,0],[9,90],[11,0]];
    { // check for a empty pos
        _array = (_veh buildingPos (_x select 0)) nearEntities ["Man",1];
        if (count _array == 0) exitWith {
            player setPosATL (_veh buildingPos (_x select 0));
            player setDir ((getDir _veh) - (_x select 1));            
            _check = true;
        };
    } forEach _posArray;
    // no empty pos, force spawn on random one
    if (!_check) then {
        _index = _posArray call BIS_fnc_randomIndex;
        player setPosATL (_veh buildingPos ((_posArray select _index) select 0));
        player setDir ((getDir _veh) - ((_posArray select _index) select 1));
    };
};