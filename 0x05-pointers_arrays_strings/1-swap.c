#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
