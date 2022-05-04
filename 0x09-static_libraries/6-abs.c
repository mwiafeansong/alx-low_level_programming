#include "main.h"

/**
 * _abs - returns absolute value
 * @n: value to be checked
 *
 * Return: n if not zero, 0 if zero
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n == 0)
		return (0);
	else
		return (n);
}
