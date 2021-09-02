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

struct Tetromino {
	int colour;
	int size;
	int shape[4][4];
	int position;
};

struct Block {
	int colour;
};