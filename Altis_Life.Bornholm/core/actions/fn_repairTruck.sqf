/*
	File: fn_repairTruck.sqf
	Author: Bryan "Tonic" Boardwine
	EditBy Distrikt41 Dscha
	Description:
	Main functionality for toolkits, to be revised in later version.
*/
private["_Veh","_upp","_ui","_progress","_pgText","_cP","_displayName"];
_Veh = life_pInact_curTarget;
_part = _this select 1;

life_interrupted = false;

if(isNull _Veh) exitwith {};
if((_Veh isKindOf "Car") OR (_Veh isKindOf "Ship") OR (_Veh isKindOf "Air")) then
{
	if("ToolKit" in (items player)) then
	{
		life_action_inUse = true;
		_displayName = getText(configFile >> "CfgVehicles" >> (typeOf _Veh) >> "displayName");
		_upp = format[localize "STR_NOTF_Repairing",_displayName];
		//Setup our progress bar.
		disableSerialization;
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNameSpace getVariable "life_progress";
		_progress = _ui displayCtrl 38201;
		_pgText = _ui displayCtrl 38202;
		_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
		_progress progressSetPosition 0.01;
		_cP = 0.01;
		[] spawn life_fnc_D41_AnimLoop;
		
		while{true} do
		{
			
			sleep 0.27;
			_cP = _cP + 0.03;
			_progress progressSetPosition _cP;
			_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
			if(_cP >= 1) exitWith {};
			if(!alive player) exitWith {};
			if(player != vehicle player) exitWith {};
			if(life_interrupted) exitWith {};
			if(!("ToolKit" in (items player))) exitWith {hint "Bescheissen is nich! Spiel Fair!";};
		};
		
		life_action_inUse = false;
		5 cutText ["","PLAIN"];
		player playActionNow "stop";
		if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
		if(player != vehicle player) exitWith {titleText[localize "STR_NOTF_RepairingInVehicle","PLAIN"];};
		if(!("ToolKit" in (items player))) exitWith {hint "Bescheissen is nich! Spiel Fair!"};
		D41_ToolKitUsed = D41_ToolKitUsed + 1;
		if(D41_ToolKitUsed > 5)then{player removeItem "ToolKit"; D41_ToolKitUsed = 0;};
		if((_Veh isKindOf "Ship") OR (_Veh isKindOf "Air")) then{_Veh setDammage 0;}else{_Veh setHitPointDamage [_part,0];};
		
		titleText[localize "STR_NOTF_RepairedVehicle","PLAIN"];
	};
};