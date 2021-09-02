#pragma once
class Tetris
{
public:
	Tetris();
	~Tetris();
	void tick(); //Ticks the tetris game
private:
	//Tetris consists of a board of tiles
	int board[24][10]; //Board with 24 rows and 10 columns, might change to 40 which is normally hidden

};

