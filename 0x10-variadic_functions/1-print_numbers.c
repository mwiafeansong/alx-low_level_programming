#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints integer parameters
 * @s: separates the integers
 * @n: number of parameters
 * @...: variable number of parameters
 *
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int x;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%d", x);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
