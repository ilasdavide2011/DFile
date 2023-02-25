#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Renderer.hpp>

class Main {
public:
	void run();
	bool running;
	SDL_Event event;
private:
	Renderer renderer;
	void init();
	void update();
	void exit();
};