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
TFL_fnc_CreateOA = compile preprocessFileLineNumbers "\TheFrontLine\client\map\createOA.sqf";


enableSaving [false,false];