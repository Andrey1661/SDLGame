
#include "Game.h"
#include <ctime>
#include "StartScene.h"

Game::Game()
{
	graphics = new Graphics(GraphicSettings(1280, 720, false));
	input = new Input();

	scene = new StartScene(graphics, input);
}


Game::~Game()
{
	delete scene;
	delete graphics;
	delete input;
}

void Game::SetScene(Scene * scene)
{
	delete this->scene;
	this->scene = scene;
}

void Game::Run()
{
	bool stop = false;

	while (!stop)
	{
		stop = input->IsExit() || scene->IsExit();

		scene->Update(0);
		scene->Render();
	}
}
