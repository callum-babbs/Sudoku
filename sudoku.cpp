#include "sudoku.h"

Sudoku::Sudoku() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			board[i][j] = 0;
		}
	}
}

void Sudoku::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
}


void Sudoku::userMove(int col, int row, int value) {

}


bool Sudoku::checkMove(int col, int row, int value) {
	return true;
}


bool Sudoku::checkSolution() {
	return true;
}


void Sudoku::finalSolution() {

}