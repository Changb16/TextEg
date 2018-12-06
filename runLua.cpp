//Bryan Chang
//Text Engine 6 

#include <stdio.h>
#include <iostream>
#include <string>
/*
//Include lua headers
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
*/

#include <lua.hpp>
using namespace std;

void runLua(string script){
	int cursed=0;
 
        //create a new lua state
        lua_State * L = luaL_newstate();
 
        static const luaL_Reg lualibs[] = 
	{
	  {"base", luaopen_base},
	  {NULL, NULL}
	};

	const luaL_Reg *lib = lualibs;
	for(; lib->func != NULL; lib++)
	{
	  lib->func(L);
	  lua_settop(L, 0);
	}
	
	luaL_dofile(L, script.c_str());

	lua_close(L);

	return;
}
