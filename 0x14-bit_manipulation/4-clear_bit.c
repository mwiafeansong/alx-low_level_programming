#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to binary number
 * @index: the index
 *
 * Return: 1 (if it worked) or -1 (if an error occurred)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
