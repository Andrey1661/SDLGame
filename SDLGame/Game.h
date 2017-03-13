#pragma once

#include "Graphics.h"
#include "Input.h"
#include "Scene.h"

class Game
{
public:
	Game();
	~Game();

	void SetScene(Scene* scene);
	void Run();

private:
	Graphics* graphics;
	Input* input;
	Scene* scene;
};

