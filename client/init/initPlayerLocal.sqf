/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
call from initPlayerLocal.sqf (in mission pbo)
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_playerUnit"];
//////////////////////////////////////////////////////////////////////////////
// COMPILE
//////////////////////////////////////////////////////////////////////////////
TFL_fnc_createOA = compile preprocessFileLineNumbers "\TheFrontLine\client\map\createOA.sqf";
TFL_fnc_onKeyDownMD = compile preprocessFileLineNumbers "\TheFrontLine\client\event\onKeyDownMainDisplay.sqf";
TFL_fnc_spawnOnVehicle = compile preprocessFileLineNumbers "\TheFrontLine\client\spawn\spawnOnVehicle.sqf";
//////////////////////////////////////////////////////////////////////////////
// INIT
//////////////////////////////////////////////////////////////////////////////
call compile preprocessFileLineNumbers "\TheFrontLine\version.sqf";

enableSaving [false,false];