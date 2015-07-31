/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs 
global object creation by server for Molos Bay mission
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
private ["_obj","_dat","_cString","_adString"];

_obj = objNull;_dat = [];_adString = "CAN_COLLIDE";
_cString = {
    _obj = createVehicle [(_dat select 0), call compile (_dat select 1), [], 0, _adString];
    _obj setdir (_dat select 2);
    _obj setposATL (call compile (_dat select 1));
    _obj setVectorUp [0,0,1];
};

// BLUFOR base
_dat = ["Land_Cargo_HQ_V1_F","[28335.121094,25692.511719,0.308922]",0,-100,1,0,[]];call _cString;