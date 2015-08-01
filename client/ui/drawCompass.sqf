/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
draw compass, call on each frame.
Params:
null
-> ["TFL_EHID_compassDraw", "onEachFrame", {call TFL_fnc_drawCompass}] call BIS_fnc_addStackedEventHandler;
Return:
null
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
#define CTRL(idc) uiNamespace getVariable "TFL_DISPLAY_compass" displayCtrl idc

_dir = getDir player;
_i = 2.92; // magic constant don't ask me...

//North
_x = (_dir / -360) * _i;
CTRL(2201) ctrlSetPosition [_x, 0];
//East
_x = ((_dir - 90) / -360) * _i;
CTRL(2202) ctrlSetPosition [_x, 0];
//South
_x = ((_dir - 180) / -360) * _i;
CTRL(2203) ctrlSetPosition [_x, 0];
//West
_x = ((_dir - 270) / -360) * _i;
CTRL(2204) ctrlSetPosition [_x, 0];
//North 2
_x = ((_dir - 360) / -360) * _i;
CTRL(2205) ctrlSetPosition [_x, 0];

{CTRL(_x) ctrlCommit 0} forEach [2201,2202,2203,2204,2205];