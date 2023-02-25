#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Renderer/Utils.hpp>
#include <iostream>

SDL_Texture* image::load(char* path, SDL_Renderer* renderer) {
	SDL_Texture* texture = NULL;
	texture = IMG_LoadTexture(renderer, path);

	if (texture == NULL) {
		std::cout << "Error. failed to load texture. sdl error: " << SDL_GetError();
	}

	return texture;
}