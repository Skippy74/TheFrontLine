/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
create operation area border on the map
Params:
0: position
1: size
2: direction
-> _markers = [[1500,4500], [250,250], 47] call TFL_fnc_CreateOA;
Return:
created markers <Array>
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_pos", "_size", "_dir"];
_return = [];
_i = 50000;
// border 
_marker = createMarkerLocal ["borderOA", _pos];
_marker setMarkerBrushLocal "Border";
_marker setMarkerSizeLocal _size;
_return pushback _marker;
// x1
_newPos = [_pos, ((_size select 0) + _i), (_dir - 90)] call BIS_fnc_relPos;
_marker = createMarkerLocal ["borderX1", _newPos];
_marker setMarkerBrushLocal "Solid";
_marker setMarkerSizeLocal [_i, _i];
_return pushback _marker;
// x2
_newPos = [_pos,((_size select 0) + _i), (_dir + 90)] call BIS_fnc_relPos;
_marker = createMarkerLocal ["borderX2", _newPos];
_marker setMarkerBrushLocal "Solid";
_marker setMarkerSizeLocal [_i, _i];
_return pushback _marker;
// y1
_newPos = [_pos, ((_size select 1) + _i), _dir] call BIS_fnc_relPos;
_marker = createMarkerLocal ["borderY1", _newPos];
_marker setMarkerBrushLocal "Solid";
_marker setMarkerSizeLocal [(_size select 0), _i];
_return pushback _marker;
//y2
_newPos = [_pos, ((_size select 1) + _i), (_dir - 180)] call BIS_fnc_relPos;
_marker = createMarkerLocal ["borderY2", _newPos];
_marker setMarkerBrushLocal "Solid";
_marker setMarkerSizeLocal [(_size select 0), _i];
_return pushback _marker;

{
    _x setMarkerShapeLocal "RECTANGLE";
    _x setMarkerTypeLocal "Empty"; 
    _x setMarkerColorLocal "ColorBlack";
    _x setMarkerDirLocal _dir;
} forEach _return;

_return 