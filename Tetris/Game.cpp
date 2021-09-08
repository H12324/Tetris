#include "Game.h"
#include "Tetris.h"

Game::Game() {
	window = NULL;
	renderer = NULL;
	running = true;
	tetris = new Tetris;
}

void Game::init() {
	// Initialize SDL. SDL_Init will return -1 if it fails.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
	}

	//Create window
	window = SDL_CreateWindow("Tetris", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
	if (window == NULL) {
		std::cout << "The window wasnt created succesfully" << std::endl;
	}
	
	
	//Create Renderer
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == NULL) {
		std::cout << "Renderer couldn't be created! SDL Error: " << SDL_GetError() << std::endl;

	}
	else {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	}


}

void Game::close() {

	//Renderer
	SDL_DestroyRenderer(renderer);
	//Destroy window
	SDL_DestroyWindow(window);
	
	window = NULL;
	renderer = NULL;
	delete tetris;
	tetris = NULL;

	// Quit SDL
	SDL_Quit();

}

void Game::handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		default:
			break;
	}
}

void Game::render() {
	//SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

	//Render red filled quad
	SDL_Rect fillRect = { 0, 0, SCREEN_WIDTH / 10, SCREEN_HEIGHT / 24 };
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(renderer, &fillRect);

	//Draw the board

	//Draw a Grid because im too lazy to work with sprites, maybe move into seperate function for cleaner code 
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	int xOffset = SCREEN_WIDTH / 10;
	int yOffset = SCREEN_HEIGHT / 24;
	for (int x = 0; x < SCREEN_WIDTH; x += xOffset) {
		SDL_RenderDrawLine(renderer, x, 0, x, SCREEN_HEIGHT);
	}
	for (int y = 0; y < SCREEN_HEIGHT; y += yOffset) {
		SDL_RenderDrawLine(renderer, 0, y, SCREEN_WIDTH, y);
	}
	SDL_RenderDrawLine(renderer, SCREEN_WIDTH - 1, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1); //adds lines at bottom right corner
	SDL_RenderDrawLine(renderer, 0, SCREEN_HEIGHT - 1, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
	
	
	SDL_RenderPresent(renderer);
}

void Game::update() {

}