/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
call from initPlayerLocal.sqf (in mission pbo)
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_playerUnit"];
enableSaving [false,false];
//////////////////////////////////////////////////////////////////////////////
// COMPILE
//////////////////////////////////////////////////////////////////////////////
TFL_fnc_onKeyDownMD = compile preprocessFileLineNumbers "\TheFrontLine\client\event\onKeyDownMainDisplay.sqf";
TFL_fnc_createOA = compile preprocessFileLineNumbers "\TheFrontLine\client\map\createOA.sqf";
TFL_fnc_spawnOnVehicle = compile preprocessFileLineNumbers "\TheFrontLine\client\spawn\spawnOnVehicle.sqf";
TFL_fnc_compassHUD = compile preprocessFileLineNumbers "\TheFrontLine\client\ui\compassHUD.sqf";
TFL_fnc_drawCompass = compile preprocessFileLineNumbers "\TheFrontLine\client\ui\drawCompass.sqf";
TFL_fnc_moveControl = compile preprocessFileLineNumbers "\TheFrontLine\client\ui\moveControl.sqf";
//////////////////////////////////////////////////////////////////////////////
// INIT
//////////////////////////////////////////////////////////////////////////////
call compile preprocessFileLineNumbers "\TheFrontLine\version.sqf";
//////////////////////////////////////////////////////////////////////////////
// IN GAME
//////////////////////////////////////////////////////////////////////////////
waitUntil {!isnull (findDisplay 46)};
TFL_EHID_keyDownMD = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call TFL_fnc_onKeyDownMD"];

["openHUD",[]] call TFL_fnc_compassHUD;