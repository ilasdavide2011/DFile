#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Renderer {
public:
	Renderer();
	void exit();
	void blit(SDL_Texture* tex);
	void clear();
	void display();
	void update();
	SDL_Texture* t;
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};