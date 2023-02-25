#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Renderer.hpp>
#include <Renderer/WindowSettings.hpp>
#include <iostream>
#include <Renderer/Utils.hpp>

Renderer::Renderer() :window(NULL), renderer(NULL) {
	window = SDL_CreateWindow(windowTitle, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		std::cout << "Error. window failed to init. sdl error: " << SDL_GetError() << std::endl;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	t = image::load("res/test.png", renderer);
}

void Renderer::exit() {
	SDL_DestroyWindow(window);
}

void Renderer::blit(SDL_Texture* tex) {
	SDL_RenderCopy(renderer, tex, NULL, NULL);
}

void Renderer::clear() {
	SDL_RenderClear(renderer);
}

void Renderer::display() {
	SDL_RenderPresent(renderer);
}

void Renderer::update() {
	Renderer::clear();
	Renderer::blit(t);
	Renderer::display();
}