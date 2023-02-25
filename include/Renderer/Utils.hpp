#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace image {
	SDL_Texture* load(char* path, SDL_Renderer* renderer);
}
