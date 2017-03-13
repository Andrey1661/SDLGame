#include "Game.h"



Game::Game()
{
	graphics = new Graphics();
}


Game::~Game()
{
	delete graphics;
}
