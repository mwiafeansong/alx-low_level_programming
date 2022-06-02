#include "main.h"

/**
 * flip_bits - finds number of bits needed to be flipped
 * to get from one number ot another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
