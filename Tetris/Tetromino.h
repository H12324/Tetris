#pragma once

//Base Tetrominoes
//Straight
//Square
//T
//L
//Skew

//List of colours
//Cyan, Yellow, Purple, Green, Red, Blue, Orange

//Board
//3
//2 
//1
//0123

/*struct Tetromino {
	int colour;
	int size;
	int shape[4][4];
	int position;
};

struct Block {
	int colour;
};
*/
// Will treat this kind of like a player class, has a current shape which shifts depending on game
class Tetromino
{
public:
	Tetromino();
	~Tetromino();
	//void rotateTetromino();

private:
	int currentShape[2][4] = {{ 0,0,0,0 }, {0, 0, 0, 0}}; //Might have to change to make it easier to transpose and rotate shapes 
	int currentShapeID;
	int pivot;
	int xpos;
	int ypos;
	//Shape List
	void getShapeFromList(int shapeId);

};

