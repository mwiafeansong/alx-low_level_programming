#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D grid
 * @grid: the 2D grid
 * @height: number of rows in grid
 *
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	{
	else
	{
		for (i = height - 1; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}
