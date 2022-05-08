#include <stdlib.h>
#include "main.h"

/**
 * free_cgrid - frees 2D grid of memory
 * @grid: the 2D grid
 * @height: number of rows in grid
 *
 * Return: None
 */

void free_cgrid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: pointer to an array of words or NULL
 */

char **strtow(char *str)
{
	unsigned int a, i, j, k, sp = 0, height = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	}
	p = malloc((height + 1) * sizeof(char *));
	if (p == NULL || height == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = sp; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				sp++;
			if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				p[i] = malloc((j - sp + 2) * sizeof(char));
				if (p[i] == NULL)
				{
					free_cgrid(p, i);
					return (NULL);
				}
				break;
			}
		}

		for (k = 0; sp <= j; sp++, k++)
			p[i][k] = str[sp];
		p[i][k] = '\0';
	}
	p[i] = NULL;
	return (p);
}
