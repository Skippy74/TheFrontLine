/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Author: MaximeFqs
handle compass hud
Params:
0: function
1: params
-> ["function name",[param1,param2]] call TFL_fnc_compassHUD;
Return:
nothing
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/
params["_func","_params"];
switch _func do {
    case "openHUD": {
        ("TFL_LAYER_Compass" call BIS_fnc_rscLayer) cutRsc ["TFL_HUD_Compass","PLAIN"];
    };
//////////////////////////////////////////////////////////////////////////////
    case "closeHUD": {
    
    };
//////////////////////////////////////////////////////////////////////////////
    case "onLoad": {
        uiNamespace setVariable ["TFL_DISPLAY_compass",_params select 0];
        ["TFL_EHID_compassDraw", "onEachFrame", {call TFL_fnc_drawCompass}] call BIS_fnc_addStackedEventHandler;
    
    };
};