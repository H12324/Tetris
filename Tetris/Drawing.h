#pragma once
#include <SDL.h>

//Helper functions for drawing board, blocks, and possibly UI

//
/*void drawGrid(SDL_Renderer* renderer, int width, int height) {
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

	int xOffset = width / 10;
	int yOffset = height / 24;
	for (int x = 0; x < width; x += xOffset) {
		for (int y = 0; y < height; y += yOffset) {
			SDL_RenderDrawLine(renderer, x, 0, x, y);
			SDL_RenderDrawLine(renderer, 0, y, x, y);
		}
	}

	
}
*/