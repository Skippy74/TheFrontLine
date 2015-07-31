/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs 
local object creation by client for Molos Bay mission
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
private ["_obj","_dat","_cString","_adString"];

_cString = {
    _type = _dat select 0;
    _pos =  call compile (_dat select 1);
    _dir = _dat select 2;

    _obj = _type createVehicleLocal _pos;
    _obj enableSimulation false;
    _obj setDir _dir;
    _obj setPosATL _pos;
    _obj setVectorUp [0,0,1];
};

// BLUFOR Base
_dat = ["Land_BagFence_Long_F","[28332.28125,25696.855469,-0.0538721]",0.946947,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Long_F","[28330.398438,25695.533203,-0.125421]",275.025,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Long_F","[28330.541016,25692.560547,-0.275068]",266.439,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Long_F","[28332.570313,25685.65625,-0.273569]",179.419,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Long_F","[28335.458984,25685.744141,-0.111953]",180.429,-100,1,0,[]];call _cString;
_dat = ["Land_HBarrier_5_F","[28339.677734,25698.433594,-0.134681]",359.003,-100,1,0,[]];call _cString;
_dat = ["Land_HBarrier_5_F","[28341.806641,25694.996094,-0.0934343]",84.4195,-100,1,0,[]];call _cString;
_dat = ["Land_HBarrier_5_F","[28342.105469,25689.496094,-0.302188]",267.929,-100,1,0,[]];call _cString;
_dat = ["Land_HBarrier_5_F","[28339.320313,25687.525391,-0.580809]",0.795344,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Short_F","[28336.40625,25686.699219,-0.127946]",260.29,-100,1,0,[]];call _cString;
_dat = ["Land_HBarrier_5_F","[28335.3125,25696.238281,-0.459596]",342.803,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Long_F","[28330.462891,25687.804688,-0.306397]",269.002,-100,1,0,[]];call _cString;
_dat = ["Land_BagFence_Corner_F","[28330.904297,25685.876953,-0.369528]",180.24,-100,1,0,[]];call _cString;

_dat = ["Land_ClutterCutter_large_F","[28324.765625,25689.949219,0]",0,-100,1,0,[]];call _cString;
_dat = ["Land_ClutterCutter_large_F","[28325.28125,25681.546875,0]",0,-100,1,0,[]];call _cString;
_dat = ["Land_ClutterCutter_large_F","[28330.00390625,25685.658203,0]",0,-100,1,0,[]];call _cString;
_dat = ["Land_ClutterCutter_large_F","[28329.148438,25694.199219,0]",0,-100,1,0,[]];call _cString;
_dat = ["Land_ClutterCutter_large_F","[28333.353516,25699.671875,0]",0,-100,1,0,[]];call _cString;