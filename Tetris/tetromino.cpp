#include "Tetromino.h"

Tetromino::Tetromino()
{
	getShapeFromList(0); //Have it always set to be 0 for now
	//Initialize at the top of the screen
	xpos = 5;
	ypos = 0;
}

Tetromino::~Tetromino()
{
}

void Tetromino::getShapeFromList(int shapeId)
{
	int newShape[2][4] = { {1, 0, 0, 0}, {1,0,0,0} };
	//0 = Straight 1 = T 2 = Square 3 = L 4 = Skew 
	switch (shapeId)
	{
	case 0: //Straight 
		int newShape[2][4] = { {1, 1, 1, 1}, {0,0,0,0} };
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	default:
		break;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			currentShape[i][j] = newShape[i][j];
		}
	}

	currentShapeID = shapeId;
}
