#include <iostream>
#include "Game.h"

//Might Remove
using namespace std;



int main(int argc, char** args) {

	Game* game = NULL;
	game = new Game();
	game->init();	//Maybe just move into constructor
	
	
	while (game->isRunning()) {
		game->handleEvents();
		//game->update();
		game->render();
	}
	
	game->close();	//Maybe just move into the destructor


	return 0;
}

