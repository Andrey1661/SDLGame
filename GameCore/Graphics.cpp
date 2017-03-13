#include "Graphics.h"


Graphics::Graphics(GraphicSettings settings)
{
	this->settings = settings;

	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, settings.width, settings.height, SDL_WINDOW_OPENGL);

	if (settings.fullscreen) 
		SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	//SDL_ShowCursor(SDL_DISABLE);
	SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
}

Graphics::~Graphics()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}

void Graphics::BeginDraw()
{
	SDL_RenderClear(renderer);
}

void Graphics::EndDraw()
{
	SDL_RenderPresent(renderer);
}
