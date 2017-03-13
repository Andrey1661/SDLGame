#include "StartScene.h"

#include "SDL.h"

StartScene::StartScene(Graphics* graphics, Input* input) : Scene(graphics, input)
{
}

StartScene::~StartScene()
{
}

void StartScene::Update(int elapsedMs)
{
	while (!input->ReadInput())
	{
		if (input->IsKeyPressed(SDLK_ESCAPE))
		{
			exit = true;
			break;
		}	
	}
}

void StartScene::Render()
{
	graphics->BeginDraw();
	graphics->EndDraw();
}

bool StartScene::IsExit()
{
	return exit;
}
