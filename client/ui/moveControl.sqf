/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
move control according to coef
Params:
0: coef
1: control position
-> _newPos = [[0,20,0,0],[control pos]] call TFL_fnc_moveControl;
_newPos will be 2 editor grid down from initial control pos
Return:
position <Number Array>
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_coef","_start"];
_start params["_X","_Y","_W","_H"];
private["_newPos"];
if ((_coef select 0) != 0) then {_X = (((_X - safezoneX)  / safezoneW) + ((_coef select 0) * 0.0025 )) * safezoneW + safezoneX};
if ((_coef select 1) != 0) then {_Y = (((_Y - safezoneY)  / safezoneH) + ((_coef select 1) * 0.004 )) * safezoneH + safezoneY};
if ((_coef select 2) != 0) then {_W = ((_W / safezoneW) + ((_coef select 2) * 0.0025 )) * safezoneW};
if ((_coef select 3) != 0) then {_H = ((_H / safezoneH) + ((_coef select 3) * 0.004 )) * safezoneH};
_newPos = [_X, _Y, _W, _H];
_newPos