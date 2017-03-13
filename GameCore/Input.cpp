#include "Input.h"

bool Input::IsExit()
{
	if (event.type == SDL_QUIT)
		return true;

	return false;
}

bool Input::ReadInput()
{
	return SDL_PollEvent(&event);
}

int Input::GetEventType()
{
	return event.type;
}

bool Input::IsKeyPressed(SDL_Keycode key)
{
	if (event.type == SDL_KEYDOWN && event.key.keysym.sym == key)
		return true;

	return false;
}

bool Input::IsKeyReleased(SDL_Keycode key)
{
	if (event.type == SDL_KEYUP && event.key.keysym.sym == key)
		return true;

	return false;
}

int Input::GetPressedKey()
{
	if (event.type == SDL_KEYDOWN)
		return event.key.keysym.sym;

	return -1;
}

int Input::GetReleasedKey()
{
	if (event.type == SDL_KEYUP)
		return event.key.keysym.sym;

	return -1;
}

MouseState Input::GetMouseState()
{
	MouseState state;

	SDL_GetMouseState(&state.mousePoint.x, &state.mousePoint.y);
	state.button = event.button.button;
	state.wheelX = event.wheel.x;
	state.wheelY = event.wheel.y;

	return state;
}
