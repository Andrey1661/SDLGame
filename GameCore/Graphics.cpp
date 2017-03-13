#include "Graphics.h"



Graphics::Graphics()
{
	int screenWidth = 1280;
	int screenHeight = 720;

	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, SDL_WINDOW_OPENGL);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	SDL_ShowCursor(SDL_DISABLE);
	SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
}


Graphics::~Graphics()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}
