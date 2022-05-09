#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;

	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
