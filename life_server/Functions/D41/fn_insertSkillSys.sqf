/*
	File: fn_insertSkillSys.sqf
	Author: Dscha

	Description:
	Inserts Stuff to DB
*/
	private["_uid","_type","_query","_sql"];

	_uid = [_this,0,"",[""]] call BIS_fnc_param;
	_type = [_this,1,"",[""]] call BIS_fnc_param;

		_query = format["UPDATE skillsys SET %1 = %1 + 1 WHERE playerid=%2",_type,_uid];
		diag_log format ["InsertSkillSys query : %1", _query];
		
		waitUntil {!DB_Async_Active};
		_thread = [_query,false] spawn DB_fnc_asyncCall;
		waitUntil {scriptDone _thread};