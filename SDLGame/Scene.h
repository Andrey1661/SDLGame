#pragma once

#include "Graphics.h"
#include "Input.h"

class Scene
{
public:
	Scene(Graphics* graphics, Input* input);
	virtual ~Scene() {}

	virtual void Update(int elapsedMs) = 0;
	virtual void Render() = 0;
	virtual bool IsExit() = 0;

protected:
	Graphics* graphics;
	Input* input;
};

