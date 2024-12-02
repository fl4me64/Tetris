#include <raylib.h>
#include "Grid.h"

int main() {
	Color blue = { 44, 44, 127, 255 };
	InitWindow(300, 600, "Tetris");
	SetTargetFPS(60);

	Grid grid = Grid();
	grid.grid[0][0] = 1;
	grid.grid[3][5] = 4;
	grid.grid[17][8] = 7;
	grid.print();

	while (WindowShouldClose() == false) {
		BeginDrawing();
		ClearBackground(blue);
		grid.draw();
		EndDrawing();
	}
	CloseWindow();
}