#include <stdlib.h>
#include "main.h"

/**
 * free grid - frees 2D grid
 * @grid: the 2D grid
 * @height: number of rows in grid
 *
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
