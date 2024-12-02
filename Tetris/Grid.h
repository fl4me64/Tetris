#pragma once
#include <vector>
#include <raylib.h>

class Grid {
public:
	Grid();
	void initialize();
	void print();
	void draw();
	int grid[20][10];
private:
	int rows;
	int cols;
	int cellSize;
	std::vector<Color> colors;
};