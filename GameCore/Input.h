#pragma once

#include "SDL.h"

struct MouseState
{
	SDL_Point mousePoint;
	int button;
	int wheelX;
	int wheelY;
};

class Input
{
public:
	Input() {}
	~Input() {}

	bool ReadInput();

	bool IsKeyPressed(SDL_Keycode key);
	bool IsKeyReleased(SDL_Keycode key);

	int GetEventType();
	int GetPressedKey();
	int GetReleasedKey();
	MouseState GetMouseState();

	bool IsExit();

private:
	SDL_Event event;
};

