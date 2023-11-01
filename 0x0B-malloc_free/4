#include "main.h"

/**
 * free_grid - to free up a grid
 * @grid: grid to be fred
 * @height: height of grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
