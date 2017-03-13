#pragma once

#include "SDL.h"
#include "SDL_image.h"

class Graphics
{
public:
	Graphics();
	~Graphics();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};

