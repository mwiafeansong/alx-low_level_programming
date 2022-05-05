#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array and initializes it
 * @size: size of the array
 * @c: character to initialize array with
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
