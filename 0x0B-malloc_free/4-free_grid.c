#include "main.h"

/**
 * free_grid - free previous 2d array created with alloc_grid function
 * @grid: 2d array to free
 * @height: h of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
