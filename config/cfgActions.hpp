class CfgActions {
    class None;	
    ////////////////////// MEDICAL
    class Heal : None {
        show = 0;
    };	
    class HealSoldier : None {
        show = 0;
    };
    class FirstAid : None {
        show = 0;
    };
    class HealBleedingOnly : None {
        show = 0;
    };	
    class HealBleedingSelfOnly : None {
        show = 0;
    };	
    class HealSoldierAuto : None {
        show = 0;
    };	
    class HealBleedingAuto : None {
        show = 0;
    };
    class PatchSoldier : None {
        show = 0;
    };
    class HealSoldierSelf : None {
        show = 0;
    };
};


/*

	
	class Gear : None {
		priority = 5.1;
		showWindow = 1;
		shortcut = "Gear";
		text = $STR_ACTION_GEAR;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\gear_ca.paa' size='2.5' shadow=2 />";
	};
	
	class GearOpen : None {
		priority = 5.1;
		showWindow = 1;
		text = $STR_ACTION_GEAROPEN;
		textDefault = $STR_ACTION_GEAROPEN;
	};
	
	class OpenBag : None {
		priority = 5.2;
		showWindow = 1;
		text = $STR_ACTION_OPEN_BAG;
		textDefault = $STR_ACTION_OPEN_BAG;
	};
	
	class TakeBag : None {
		priority = 5.3;
		text = $STR_ACTION_TAKE_BAG;
		textDefault = $STR_ACTION_TAKE_BAG;
		showWindow = 1;
	};
	
	class PutBag : None {
		priority = 5.2;
		showWindow = 0;
		text = $STR_ACTION_DROP_BAG;
		textDefault = $STR_ACTION_DROP_BAG;
	};
	
	class DropBag : None {
		priority = 5.2;
		showWindow = 0;
		text = $STR_ACTION_DROP_BAG;
		textDefault = $STR_ACTION_DROP_BAG;
	};
	
	class AddBag : None {
		priority = 5.3;
		showWindow = 0;
		text = $STR_ACTION_TAKE_BAG;
		textDefault = $STR_ACTION_TAKE_BAG;
	};
	
	class NVGoggles : None {
		show = 0;
	};
	
	class NVGogglesOff : NVGoggles {
		show = 0;
	};
	
	class GetOut : None {
		showWindow = 0;
		priority = 6.2;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2 />";
	};
	
	class Eject : None {
		showWindow = 0;
		priority = 6.1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\eject_ca.paa' size='1.8' shadow=2 />";
	};
	
	class LadderOnUp : None {
		showWindow = 1;
		priority = 8;
		radius = 2;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderup_ca.paa' size='1.8' shadow=2 />";
	};
	
	class LadderOnDown : None {
		showWindow = 1;
		priority = 8;
		radius = 2;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderdown_ca.paa' size='1.8' shadow=2 />";
	};
	
	class LadderOff : None {
		showWindow = 1;
		priority = 5;
		radius = 2;
		text = $STR_ACTION_LADDEROFF;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderoff_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToDriver : None {
		showWindow = 0;
		priority = 1.1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToPilot : MoveToDriver {
		priority = 1.2;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToGunner : None {
		showWindow = 0;
		priority = 1.5;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToCommander : None {
		showWindow = 0;
		priority = 1.4;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToCargo : None {
		showWindow = 0;
		priority = 1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
	};
	
	class MoveToTurret : None {
		showWindow = 0;
		priority = 1.3;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	
	class LoadMagazine : None {
		priority = 2;
		show = 0;
	};
	
	class LoadOtherMagazine : LoadMagazine {
		show = 1;
		priority = 2;
		showWindow = 0;
	};
	
	class LoadEmptyMagazine : LoadMagazine {
		show = 1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\reload_ca.paa' size='1.8' shadow=2 />";
		priority = 2.1;
		showWindow = 1;
	};
	
	class TakeVehicleControl : None {
		priority = 8;
		text = $STR_ACTION_TAKE_CONTROL;
		textDefault = $STR_ACTION_TAKE_CONTROL;
	};
	
	class SuspendVehicleControl : None {
		priority = 7;
		text = $STR_ACTION_SUSPEND_CONTROL;
		textDefault = $STR_ACTION_SUSPEND_CONTROL;
	};
	
	class LockVehicleControl : None {
		priority = 7;
		text = $STR_ACTION_LOCK_CONTROL;
		textDefault = $STR_ACTION_LOCK_CONTROL;
	};
	
	class UnlockVehicleControl : None {
		priority = 7;
		text = $STR_ACTION_UNLOCK_CONTROL;
		textDefault = $STR_ACTION_UNLOCK_CONTROL;
	};
	
	class SwitchWeapon : None {
		priority = 3.1;
		shortcut = "SwitchWeapon";
		text = $STR_ACTION_WEAPON;
		textDefault = $STR_ACTION_WEAPON;
	};
	
	class SwitchMagazine : SwitchWeapon {
		shortcut = "ReloadMagazine";
	};
	
	class HideWeapon : SwitchWeapon {
		text = $STR_ACTION_HIDE_WEAPON;
		textDefault = $STR_ACTION_HIDE_WEAPON;
	};
	
	class UseWeapon : None {
		priority = 1.2;
		text = "%1";
		textDefault = "%1";
	};
	
	class HandGunOn : None {
		priority = 3;
		text = $STR_ACTION_WEAPON;
		textDefault = $STR_ACTION_WEAPON;
	};
	
	class HandGunOnStand : HandGunOn {
		text = $STR_ACTION_WEAPONINHAND;
		textDefault = $STR_ACTION_WEAPONINHAND;
	};
	
	class HandGunOff : None {
		priority = 3;
		text = $STR_ACTION_WEAPON;
		textDefault = $STR_ACTION_WEAPON;
	};
	
	class HandGunOffStand : HandGunOff {
		text = $STR_ACTION_WEAPONINHAND;
		textDefault = $STR_ACTION_WEAPONINHAND;
	};
	
	class EngineOn : None {
		showWindow = 0;
		priority = 6;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\engine_on_ca.paa' size='1.8' shadow=2 />";
	};
	
	class EngineOff : None {
		show = 1;
		showWindow = 0;
		priority = 6;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\engine_off_ca.paa' size='1.8' shadow=2 />";
	};
	
	class GetInCommander : None {
		showWindow = 1;
		priority = 5.9;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class GetInDriver : None {
		showWindow = 1;
		priority = 5.8;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class GetInPilot : None {
		showWindow = 1;
		priority = 5.6;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class GetInGunner : None {
		showWindow = 1;
		priority = 5.7;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class GetInCargo : None {
		showWindow = 1;
		priority = 5.5;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class GetInTurret : None {
		showWindow = 1;
		priority = 5.4;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
	};
	
	class Repair : None {
		showWindow = 1;
		priority = 6;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	
	class Rearm : None {
		showWindow = 1;
		priority = 5.1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\reammo_ca.paa' size='1.8' shadow=2 />";
	};
	
	class Refuel : None {
		showWindow = 1;
		priority = 2;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\refuel_ca.paa' size='1.8' shadow=2 />";
	};
	

	
	class RepairVehicle : None {
		priority = 9;
		showWindow = 1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	
	class Sleep : None {
		text = "$STR_A3_CfgActions_Sleep0";
	};
	
	class WakeUp : None {
		text = "$STR_A3_CfgActions_WakeUp0";
	};
	
	class UnmountItem : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_UnmountItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class MountItem : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_MountItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class DropItem : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_DropItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class TakeItem : None {
		showWindow = 1;
		priority = 5.3;
		text = "$STR_A3_CfgActions_TakeItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	
	class UnloadMagazine : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_UnloadMagazine0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class ChangeUniformWithBody : None {
		showWindow = 0;
		priority = 2;
		text = "$STR_A3_CfgActions_ChangeUniformWithBody0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class DropItemFromBody : None {
		showWindow = 0;
		priority = 4;
		text = "$STR_A3_CfgActions_DropItemFromBody0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class TakeItemFromBody : None {
		showWindow = 0;
		priority = 5.3;
		text = "$STR_A3_CfgActions_TakeItemFromBody0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class ChangeBackpackFromBackpack : None {
		showWindow = 0;
		priority = 4;
		text = "$STR_A3_CfgActions_ChangeBackpackFromBackpack0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class TakeWeaponFromBody : None {
		showWindow = 0;
		priority = 5;
		text = "$STR_A3_CfgActions_TakeWeaponFromBody0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class TakeBackpackFromBody : None {
		showWindow = 0;
		priority = 5;
		text = "$STR_A3_CfgActions_TakeBackpackFromBody0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class UnmountUniformItem : None {
		showWindow = 0;
		priority = 2;
		text = "$STR_A3_CfgActions_UnmountUniformItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class MountUniformItem : None {
		showWindow = 0;
		priority = 2;
		text = "$STR_A3_CfgActions_MountUniformItem0";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class MountWeaponFromInv : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_MountWeaponFromInv0";
		extDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class UnmountWeaponToInv : None {
		showWindow = 1;
		priority = 2;
		text = "$STR_A3_CfgActions_UnmountWeaponToInv0";
		extDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	
	class TakeWeapon : None {
		showWindow = 1;
		priority = 5.3;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	
	class TakeMagazine : None {
		showWindow = 1;
		priority = 5.3;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	
	class TakeFlag : None {
		showWindow = 1;
		priority = 7;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\takeflag_ca.paa' size='1.8' shadow=2 />";
	};
	
	class ReturnFlag : None {
		showWindow = 1;
		priority = 8;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\returnflag_ca.paa' size='1.8' shadow=2 />";
	};
	
	class WeaponInHand : None {
		show = 0;
	};
	
	class WeaponOnBack : None {
		show = 0;
	};
	
	class SetTimer : None {
		showWindow = 1;
		priority = 2.1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\settimer_ca.paa' size='1.8' shadow=2 />";
	};
	
	class TouchOff : None {
		showWindow = 1;
		priority = 0.1;
	};
	
	class TouchOffMines : None {
		showWindow = 1;
		priority = 0.1;
	};
	
	class Deactivate : None {
		showWindow = 1;
		priority = 2.1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	
	class FireInflame : None {};
	
	class FirePutDown : None {};
	
	class Salute : None {
		priority = 1;
		shortcut = "Salute";
		show = 0;
		text = $STR_ACTION_SALUTE;
		textDefault = $STR_ACTION_SALUTE;
	};
	
	class SitDown : None {
		priority = 1;
		shortcut = "SitDown";
		show = 0;
		text = $STR_ACTION_SITDOWN;
		textDefault = $STR_ACTION_SITDOWN;
	};
	
	class TakeMine : None {
		showWindow = 1;
		priority = 3;
		text = $STR_ACTION_TAKE_MINE;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	
	class DropWeapon : None {
		showWindow = 1;
		priority = 2;
		text = $STR_ACTION_DROP_WEAPON;
	};
	
	class PutWeapon : DropWeapon {
		showWindow = 1;
		priority = 5;
		text = $STR_ACTION_PUT_WEAPON;
	};
	
	class DeactivateMine : None {
		showWindow = 1;
		priority = 9;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	
	class UseMagazine : None {
		priority = 3;
		text = "%1";
		textDefault = "%1";
	};
	
	class CancelTakeFlag : None {
		showWindow = 1;
		priority = 8;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\close_ca.paa' size='1.8' shadow=2 />";
	};
	
	class CancelAction : None {
		showWindow = 0;
		priority = 8;
		textDefault = "";
	};
	
	class MarkEntity : None {};
	
	class Assemble : None {
		priority = 6;
		showWindow = 0;
		text = $STR_ACTION_ASSEMBLE;
		textDefault = $STR_ACTION_ASSEMBLE;
	};
	
	class DisAssemble : None {
		priority = 5;
		showWindow = 0;
		text = $STR_ACTION_DISASSEMBLE;
		textDefault = $STR_ACTION_DISASSEMBLE;
	};
	
	class AIAssemble : None {
		priority = 6;
		showWindow = 0;
		text = $STR_ACTION_ASSEMBLE;
		textDefault = $STR_ACTION_ASSEMBLE;
	};
	
	class Talk : None {
		priority = 9;
		text = $STR_ACTION_ASK;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\talk_ca.paa' size='1.8' shadow=2 />";
	};
	
	class OpenParachute : None {
		priority = 9.1;
		text = $STR_A3_RSCGROUPROOTMENU_ITEMS_OPENPARACHUTE0;
	};
	
	class OpenParachuteSteerable : None {
		priority = 9.1;
		text = "$STR_A3_CfgActions_OpenParachuteSteerable0";
	};
	
	class OpenParachuteNonSteerable : None {
		priority = 9.2;
		text = "$STR_A3_CfgActions_OpenParachuteNonSteerable0";
	};
	
	class ActivateBreathingBomb : None {
		priority = 9.3;
		text = "$STR_A3_CfgActions_ActivateBreathingBomb0";
	};
	
	class DeactivateBreathingBomb : None {
		priority = 9.4;
		text = "$STR_A3_CfgActions_DeactivateBreathingBomb0";
	};
	
	class AutoHover : None {
		priority = 3;
		text = $STR_ACTION_HOVER;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\autohover_ca.paa' size='1.8' shadow=2 />";
	};
	
	class AutoHoverCancel : AutoHover {
		showWindow = 0;
		priority = 3;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\cancelhover_ca.paa' size='1.8' shadow=2 />";
	};
	
	class FlapsDown : None {
		priority = 0.7;
		hideOnUse = 0;
		shortcut = "FlapsDown";
		text = $STR_ACTION_FLAPS_DOWN;
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsExtend_ca.paa' size='1.8' shadow=2 />";
	};
	
	class FlapsUp : None {
		priority = 0.7;
		hideOnUse = 0;
		shortcut = "FlapsUp";
		text = $STR_ACTION_FLAPS_UP;
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsRetract_ca.paa' size='1.8' shadow=2 />";
	};
	
	class Land : None {
		priority = 0.9;
		text = $STR_ACTION_LAND;
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_ON_ca.paa' size='1.8' shadow=2 />";
	};
	
	class CancelLand : None {
		priority = 0.9;
		text = $STR_ACTION_CANCEL_LAND;
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	
	class PeriscopeDepthOn : None {
		text = "$STR_A3_LOC_PeriscopeDepthOn";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_ON_ca.paa' size='1.8' shadow=2 />";
	};
	
	class PeriscopeDepthOff : None {
		text = "$STR_A3_LOC_PeriscopeDepthOff";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	
	
	
	class PutInDriver : None {
		priority = 9.5;
		text = "$STR_A3_CfgActions_PutInDriver0";
	};
	
	class PutInPilot : None {
		priority = 9.6;
		text = "$STR_A3_CfgActions_PutInPilot0";
	};
	
	class PutInCargo : None {
		priority = 9.7;
		text = "$STR_A3_CfgActions_PutInCargo0";
	};
	
	class PutInGunner : None {
		priority = 9.5;
		text = "$STR_A3_CfgActions_PutInGunner0";
	};
	
	class PutInCommander : None {
		priority = 9.6;
		text = "$STR_A3_CfgActions_PutInCommander0";
	};
	
	class PutInTurret : None {
		priority = 9.7;
		text = "$STR_A3_CfgActions_PutInTurret0";
	};
	
	class UnloadFromDriver : None {
		priority = 8.5;
		text = "$STR_A3_CfgActions_UnloadFromDriver0";
	};
	
	class UnloadFromPilot : None {
		priority = 8.6;
		text = "$STR_A3_CfgActions_UnloadFromPilot0";
	};
	
	class UnloadFromCargo : None {
		priority = 8.7;
		text = "$STR_A3_CfgActions_UnloadFromCargo0";
	};
	
	class UnloadFromCommander : None {
		priority = 8.5;
		text = "$STR_A3_CfgActions_UnloadFromCommander0";
	};
	
	class UnloadFromGunner : None {
		priority = 8.6;
		text = "$STR_A3_CfgActions_UnloadFromGunner0";
	};
	
	class UnloadFromTurret : None {
		priority = 8.7;
		text = "$STR_A3_CfgActions_UnloadFromTurret0";
	};
	
	class HealBleedingOnly : None {
		text = "$STR_A3_CfgActions_HealBleedingOnly0";
	};
	
	class HealBleedingSelfOnly : None {
		text = "$STR_A3_CfgActions_HealBleedingSelfOnly0";
	};
	
	class HealSoldierAuto : None {
		text = "$STR_A3_CfgActions_HealSoldierAuto0";
	};
	
	class HealBleedingAuto : None {
		text = "$STR_A3_CfgActions_HealBleedingAuto0";
	};
	
	class ActivateFins : None {
		text = "$STR_A3_CfgActions_ActivateFins0";
	};
	
	class DeactivateFins : None {
		text = "$STR_A3_CfgActions_DeactivateFins0";
	};
	
	class LightOn : None {
		text = $STR_ACTION_LIGHTS_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_LIGHTS_ON_TIP;
		modelPositions = "switch_lightsldg";
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 3;
		showWindow = 0;
	};
	
	class LightOff : LightOn {
		text = $STR_ACTION_LIGHTS_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_LIGHTS_OFF_TIP;
	};
	
	class CollisionLightOn : None {
		text = $STR_ACTION_COLLISIONLIGHTS_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_COLLISIONLIGHTS_ON_TIP;
		modelPositions = "switch_lightsac";
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 3;
		showWindow = 0;
	};
	
	class CollisionLightOff : CollisionLightOn {
		text = $STR_ACTION_COLLISIONLIGHTS_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_COLLISIONLIGHTS_OFF_TIP;
	};
	
	class BatteriesOn : None {
		text = $STR_ACTION_BATTERIES_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_BATTERIES_ON_TIP;
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 3;
		modelPositions = "switch_batteries";
		showWindow = 1;
	};
	
	class BatteriesOff : BatteriesOn {
		text = $STR_ACTION_BATTERIES_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_BATTERIES_OFF_TIP;
		priority = 2;
	};
	
	class APUOn : None {
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 3;
		modelPositions = "switch_apu";
		showWindow = 1;
		priority = 4;
		text = $STR_ACTION_APU_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_APU_ON_TIP;
	};
	
	class APUOff : APUOn {
		text = $STR_ACTION_APU_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_APU_OFF_TIP;
		priority = 3;
	};
	
	class StarterOn1 : None {
		text = $STR_ACTION_STARTER1_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER1_ON_TIP;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_starter", "switch_starter_2"};
		showWindow = 1;
	};
	
	class StarterOff1 : StarterOn1 {
		text = $STR_ACTION_STARTER1_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER1_OFF_TIP;
		priority = 3;
	};
	
	class StarterOn2 : None {
		text = $STR_ACTION_STARTER2_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER2_ON_TIP;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_starter2", "switch_starter2_2"};
		showWindow = 1;
	};
	
	class StarterOff2 : StarterOn2 {
		text = $STR_ACTION_STARTER2_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER2_OFF_TIP;
		priority = 3;
	};
	
	class StarterOn3 : None {
		text = $STR_ACTION_STARTER3_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER3_ON_TIP;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_starter3", "switch_starter3_2"};
		showWindow = 1;
	};
	
	class StarterOff3 : StarterOn3 {
		text = $STR_ACTION_STARTER3_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		textToolTip = $STR_ACTION_STARTER3_OFF_TIP;
		priority = 3;
	};
	
	class ThrottleOff1 : None {
		text = $STR_ACTION_THROTTLE1_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE1_OFF_TIP;
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_throttle", "switch_throttle_2"};
		showWindow = 1;
	};
	
	class ThrottleIdle1 : ThrottleOff1 {
		text = $STR_ACTION_THROTTLE1_IDLE;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE1_IDLE_TIP;
		priority = 3;
	};
	
	class ThrottleFull1 : ThrottleOff1 {
		text = $STR_ACTION_THROTTLE1_FULL;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE1_FULL_TIP;
		priority = 3;
	};
	
	class ThrottleOff2 : None {
		text = $STR_ACTION_THROTTLE2_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE2_OFF_TIP;
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_throttle2", "switch_throttle2_2"};
		showWindow = 1;
	};
	
	class ThrottleIdle2 : ThrottleOff2 {
		text = $STR_ACTION_THROTTLE2_IDLE;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE2_IDLE_TIP;
		priority = 3;
	};
	
	class ThrottleFull2 : ThrottleOff2 {
		text = $STR_ACTION_THROTTLE2_FULL;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE2_FULL_TIP;
		priority = 3;
	};
	
	class ThrottleOff3 : None {
		text = $STR_ACTION_THROTTLE3_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE3_OFF_TIP;
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		available = 3;
		modelPositions[] = {"switch_throttle3", "switch_throttle3_2"};
		showWindow = 1;
	};
	
	class ThrottleIdle3 : ThrottleOff3 {
		text = $STR_ACTION_THROTTLE3_IDLE;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE3_IDLE_TIP;
		priority = 4;
	};
	
	class ThrottleFull3 : ThrottleOff3 {
		text = $STR_ACTION_THROTTLE3_FULL;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_THROTTLE3_FULL_TIP;
		priority = 4;
	};
	
	class RotorBrakeOn : None {
		text = $STR_ACTION_ROTOR_BRAKE_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_brk_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_ROTOR_BRAKE_ON_TIP;
		priority = 0.6;
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 3;
		modelPositions = "switch_rotor_brake";
		showWindow = 0;
	};
	
	class RotorBrakeOff : RotorBrakeOn {
		text = $STR_ACTION_ROTOR_BRAKE_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_ROTOR_BRAKE_OFF_TIP;
		priority = 0.3;
	};
	
	class WheelsBrakeOn : None {
		text = $STR_ACTION_BRAKE_ON;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_BRAKE_ON_TIP;
		priority = 0.6;
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		available = 0;
		modelPositions = "switch_rotor_brake";
		showWindow = 0;
	};
	
	class WheelsBrakeOff : WheelsBrakeOn {
		text = $STR_ACTION_BRAKE_OFF;
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		textToolTip = $STR_ACTION_BRAKE_OFF_TIP;
		priority = 0.3;
	};
};
*/