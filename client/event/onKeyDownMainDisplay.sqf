/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
handle key down from main display
Params:
0: display
1: DIK key code
2: shift
3: ctrl
4: alt
-> (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call TFL_fnc_onKeyDownMD"];
Return:
handle <Boolean> (if true override default behaviour) 
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["","_key","_shift","_ctrl","_alt"];
_handle = false;
switch _key do {
    case 59 : { // F1
        createDialog "TFL_DIALOG_mainMenu"
    };
};