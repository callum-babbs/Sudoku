#ifndef sudoku_h
#define sudoku_h

//Create the board - for now make it the same numbers every time
//Always 9x9
//Get user move
//Check that it is valid
//Check if the game is solved
//Solve the game for the user



#include <iostream>
#include <string>

const int size = 9;

class Sudoku {

public:

	//initializes board with set values
	Sudoku();

	//prints board to the screen
	void printBoard();

	//takes in a user move and updates the board if it is valid
	void userMove(int col, int row, int value);

	//checks the user's move and returns true if it is valid
	bool checkMove(int col, int row, int value);

	//checks the board after each move to see if the given board matches the solution
	bool checkSolution();

	//Fills the array with the correct solution
	void finalSolution();


private:

	int row;
	int col;
	int value;
	int board[size][size];
};

#endif