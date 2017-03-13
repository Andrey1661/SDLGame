#pragma once

#include "Scene.h"
#include "Input.h"

class StartScene : public Scene
{
public:
	StartScene(Graphics* graphics, Input* input);
	~StartScene() override;

	void Update(int elapsedMs) override;
	void Render() override;
	bool IsExit() override;

private:
	bool exit = false;
};

