#include "main.h"

/**
 * iteration - function to loop through
 * @n: integer in question
 * @i: iterator
 *
 * Return: 0 or 1
 */

int iteration(int n, int i)
{
	if (i == n - 1)
		return (1);
	if (n % i == 0 || n < 2)
		return (0);
	return (iteration(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer
 *
 * Return: 0 if false, 1 if true
 */

int is_prime_number(int n)
{
	int i = 2;

	return (iteration(n, i));
}
