#define path(icon) __EVAL ("\TheFrontLine\data\ui\" + icon)

class TFL_HUD_Compass {
    idd = -1;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    duration = 999999;
    onLoad = "['onLoad',_this] call TFL_fnc_compassHUD";
    // onUnload  = "(_this select 0) call hicom_onUnloadHCD";
    controlsBackground[] = {};
    controls[] = {compassCtrlGroup};

    class compassCtrlGroup: TFL_RSC_ControlsGroup {
        idc = -1;
        x = 0.35 * safezoneW + safezoneX;
        y = 0.936 * safezoneH + safezoneY;
        w = 0.3 * safezoneW;
        h = 0.2 * safezoneH;
        
        class Controls {

            class bearing {
                access = 0;
                type = 0;
                idc = 2211;
                x = 0;
                y = 0;
                w = 0.3 * safezoneW;
                h = 0.06 * safezoneH;
                style = 48;
                shadow = 0;
                colorText[] = {1,1,1,1};
                colorBackground[] = {0,0,0,0};
                text = path("bearing.paa");
                font = "PuristaMedium";
                sizeEx = 0;
                lineSpacing = 0;
                fixedWidth = 1;
                tooltipColorText[] = {1,1,1,1};
                tooltipColorBox[] = {1,1,1,1};
                tooltipColorShade[] = {0,0,0,1};
            };
            
            class compassN : bearing {
                idc = 2201;
                text = path("compassN.paa");
            };
            
            class compassE : bearing {
                idc = 2202;
                text = path("compassE.paa");
            };
            
            class compassS : bearing {
                idc = 2203;
                text = path("compassS.paa");
            };
            
            class compassW : bearing {
                idc = 2204;
                text = path("compassW.paa");
            };
            
            class compassN2 : bearing {
                idc = 2205;
                text = path("compassN.paa");
            };
        };
    };
};