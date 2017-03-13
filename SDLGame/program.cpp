#include <stdio.h>
#include <iostream>

using namespace std;

#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>  

#include "Game.h"

int main(int agrc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Game* game = new Game();
	game->Run();

	delete game;

	return 0;
}