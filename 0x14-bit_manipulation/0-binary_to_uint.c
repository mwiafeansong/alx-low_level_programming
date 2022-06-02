#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number in string format
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	int dec_value = 1;
	unsigned int total = 0;

	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
		;

	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			total += dec_value;
		dec_value *= 2;
	}

	return (total);
}
