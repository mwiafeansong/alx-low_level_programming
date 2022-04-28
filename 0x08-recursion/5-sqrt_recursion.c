#include "main.h"

/**
 * iteration - function to iterate through
 * @n: value
 * @i: iterator
 *
 * Return: -1 or i
 */

int iteration(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (iteration(n, i + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 *
 * Return: -1 or the square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (iteration(n, i));
}
