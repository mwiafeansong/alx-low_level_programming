#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(width * sizeof(int));

			if (p[i] == NULL)
			{
				while (--i)
					free(p[i]);
				free(p[0]);
				free(p);
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
					p[i][j] = 0;
			}
		}
		return (p);
	}
}
