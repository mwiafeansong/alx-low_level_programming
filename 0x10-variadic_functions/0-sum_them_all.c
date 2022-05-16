#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: sum of prameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}

	va_end(args);

	return (sum);
}
