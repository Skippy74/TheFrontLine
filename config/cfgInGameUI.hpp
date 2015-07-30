class CfgInGameUI {
    class CommandBar {
        left = "(profilenamespace getvariable [""IGUI_GRID_BAR_X"",     (safezoneX + 1 *            (           ((safezoneW / safezoneH) min 1.2) / 40))])";
        top = "(profilenamespace getvariable [""IGUI_GRID_BAR_Y"",      (safezoneY + safezoneH - 4.5 *          (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
        width = 0;
        height = 0;
        imageDefaultWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageDefaultWeapons_ca.paa";
        imageNoWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
        imageCommander = "A3\ui_f\data\igui\cfg\commandbar\imageCommander_ca.paa";
        imageDriver = "A3\ui_f\data\igui\cfg\commandbar\imageDriver_ca.paa";
        imageGunner = "A3\ui_f\data\igui\cfg\commandbar\imageGunner_ca.paa";
        imageCargo = "A3\ui_f\data\igui\cfg\commandbar\imageCargo_ca.paa";
        dimm = 0.3;
        colorRedTeam[] = {1.0, 0, 0, 1.0};
        colorBlueTeam[] = {0, 0, 1.0, 1.0};
        colorGreenTeam[] = {0.259, 0.463, 0.149, 1};
        colorYellowTeam[] = {0.8, 0.8, 0, 1.0};
        colorWhiteTeam[] = {0.95, 0.95, 0.95, 1};
        
        class prevPage {
            x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
            y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = 0;
            h = 0;
            color[] = {0.259, 0.463, 0.149, 0};
            texture = "A3\ui_f\data\igui\cfg\commandbar\prevPage_ca.paa";
        };
        
        class nextPage {
            x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
            y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = 0;
            h = 0;
            color[] = {0.259, 0.463, 0.149, 0};
            texture = "A3\ui_f\data\igui\cfg\commandbar\nextPage_ca.paa";
        };
        
        class UnitInfo {
            font = "FontMono";
            
            class VehicleNumberBackground {
                texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\vehicleNumberBackground_ca.paa";
                color[] = {0.259, 0.463, 0.149, 0};
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "0 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitNumberBackground {
                texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNumberBackground_ca.paa";
                color[] = {0.259, 0.463, 0.149, 0};
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitNameBackground {
                textureNormal = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
                texturePlayer = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
                textureSelected = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
                textureFocus = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
                colorNormal[] = {0.259, 0.463, 0.149, 0};
                colorPlayer[] = {0.259, 0.463, 0.149, 0};
                colorFocus[] = {0.259, 0.463, 0.149, 0};
                colorSelected[] = {0.259, 0.463, 0.149, 0};
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "2 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 1, 1, 0};
            };
            
            class CommandBackground {
                texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\commandBackground_ca.paa";
                color[] = {0.259, 0.463, 0.149, 0};
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "3 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class VehicleStatus {
                color[] = {0, 0, 0, 0};
                colorDamaged[] = {0.259, 0.463, 0.149, 0};
                colorNoAmmo[] = {0.259, 0.463, 0.149, 0};
                colorNoFuel[] = {0.259, 0.463, 0.149, 0};
                texture = "#(argb,8,8,3)color(1,1,1,1)";
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "0 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitStatus {
                color[] = {0, 0, 0, 0};
                colorWounded[] = {0.259, 0.463, 0.149, 0};
                colorWoundedFade[] = {0.259, 0.463, 0.149, 0};
                colorNoAmmo[] = {0.259, 0.463, 0.149, 0};
                texture = "#(argb,8,8,3)color(1,1,1,1)";
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitCombatMode {
                colorBlue[] = {1, 0, 0, 0};
                colorGreen[] = {1, 0, 0, 0};
                colorWhite[] = {1, 0, 0, 0};
                colorYellow[] = {0, 0, 0, 0};
                colorRed[] = {0, 0, 0, 0};
                textureBlue = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                textureGreen = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                textureWhite = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                textureYellow = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                textureRed = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                text = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
                x = "1 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 0, 0, 0};
            };
            
            class UnitBehavior {
                colorCareless[] = {0, 0, 0, 0};
                colorSafe[] = {0, 0, 0, 0};
                colorAware[] = {0, 0, 0, 0};
                colorCombat[] = {1, 0.25, 0, 0};
                colorStealth[] = {0, 0.8, 1, 0};
                textureMCareless = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                textureMSafe = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                textureMCombat = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                textureMYellow = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                textureMStealth = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                text = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
                x = "2 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class GroupIcon {
                color[] = {1, 1, 1, 0};
                x = "1 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class VehicleRole {
                color[] = {0, 0, 0, 0};
                shadow = false;
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "0 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class VehicleIcon {
                color[] = {1, 1, 1, 0};
                shadow = 2;
                x = "1.2 *          (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "0.1 *          (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitRank {
                color[] = {0, 0, 0, 0};
                shadow = false;
                x = "0.1 *          (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1.1 *          (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitRole {
                color[] = {1, 1, 1, 0};
                shadow = 2;
                x = "1 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class UnitSpecialRole {
                color[] = {1, 1, 1, 0};
                shadow = 2;
                x = "2 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
            };
            
            class VehicleNumberText {
                font = "PuristaMedium";
                shadow = 2;
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "0 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 1, 1, 0};
                sizeEx = 0;
            };
            
            class UnitNumberText {
                font = "PuristaMedium";
                shadow = 2;
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "1 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 1, 1, 0};
                sizeEx = 0;
            };
            
            class UnitName {
                font = "PuristaMedium";
                shadow = true;
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "2 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 1, 1, 0};
                sizeEx = 0;
            };
            
            class CommandText {
                font = "PuristaMedium";
                shadow = true;
                x = "0 *            (           ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "3 *            (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = 0;
                h = 0;
                colorText[] = {1, 1, 1, 0};
                sizeEx = 0;
            };
        };
    };      
};  