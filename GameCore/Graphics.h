#pragma once

#include "SDL.h"
#include "SDL_image.h"

struct GraphicSettings
{
	explicit GraphicSettings(int width, int height, bool fullscreen = false)
	{
		this->width = width;
		this->height = height;
		this->fullscreen = fullscreen;
	}

	GraphicSettings() : GraphicSettings(800, 600, false) {};

	int width;
	int height;
	bool fullscreen;
};

class Graphics
{
public:
	Graphics(GraphicSettings settings);
	~Graphics();

	void BeginDraw();
	void EndDraw();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;

	GraphicSettings settings;
};

