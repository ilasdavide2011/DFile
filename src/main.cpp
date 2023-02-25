#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Main.hpp>

void Main::run() {
	Main::init();
	Main::update();
	Main::exit();
}

void Main::init() {
	if (SDL_Init(SDL_INIT_VIDEO) > 0) {
		std::cout << "Error. SDL_Init has failed. sdl error: " << SDL_GetError() << std::endl;
	}
	if (!(IMG_Init(IMG_INIT_PNG))) {
		std::cout << "IMG_init has failed. sdl error: " << SDL_GetError() << std::endl;
	}

	running = true;
}

void Main::update() {
	while (running) {
		renderer.update();

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
			}
		}
	}
}

void Main::exit() {
	renderer.exit();
	SDL_Quit();
}

int main(int argc, char* argv[]) {
	Main main;
	main.run();

	return 0;
}