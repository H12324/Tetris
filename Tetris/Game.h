#pragma once
#include <SDL.h>
#include <iostream>


class Game
{
public:
	Game();
	~Game();

	//Create the window
	void init();
	//Close/Clean the game
	void close();

	void handleEvents();
	void render();
	void update();

	bool isRunning() { return running; }
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	Tetris* tetris;

	//Screen dimensions
	const int SCREEN_WIDTH = 300;
	const int SCREEN_HEIGHT = 720;

	bool running;
};

