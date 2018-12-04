//Bryan Chang
//Text Engine 6 

#include <stdio.h>
#include <iostream>
#include <string>

//Include lua headers
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

using namespace std;

void runLua(string script){
	int cursed=0;
/*
    //iterate all files and execute
    for(int n=1; n<argc; n++){
        char * file = argv[n];
 */
        //create a new lua state
        lua_State * L = luaL_newstate();
 
        //open all libraries
        luaL_openlibs(L);
	
	//cout<<"Script start"<<endl;
 	
        int s = luaL_loadfile(L, script);

	s = lua_pcall(L, 0, LUA_MULTRET, 0);
 
        lua_close(L);

	//cout<<"Script end"<<endl;
    }
 
    return;
}
