//Bryan Chang
//Text Engine 6 

#include <stdio.h>
#include <iostream>

//Include lua headers
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

using namespace std;

int main(int argc, char ** argv){
	int cursed=0;

    //iterate all files and execute
    for(int n=1; n<argc; n++){
        char * file = argv[n];
 
        //create a new lua state
        lua_State * L = luaL_newstate();
 
        //open all libraries
        luaL_openlibs(L);
	
	cout<<"Script start"<<endl;
 	
        int s = luaL_loadfile(L, file);

	s = lua_pcall(L, 0, LUA_MULTRET, 0);
 
        lua_close(L);

	cout<<"Scipt end"<<endl;
    }
 
    return 0;
}
