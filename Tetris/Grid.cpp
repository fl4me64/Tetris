#include <iostream>
#include "Grid.h"
#include "Colors.h"

Grid::Grid() {
	rows = 20;
	cols = 10;
	cellSize = 30;
	initialize();
	colors = getCellColors();
}

void Grid::initialize() {
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			grid[row][col] = 0;
		}
	}
}

void Grid::print() {
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			std::cout << grid[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

void Grid::draw() {
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			int cell = grid[row][col];
			DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cell]);
		}
	}
}