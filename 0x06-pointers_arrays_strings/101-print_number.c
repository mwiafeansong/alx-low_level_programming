#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: None
 */

void print_number(int n)
{
	unsigned int d, count;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	d = n;
	count = 1;

	while (d > 9)
	{
		d = d / 10;
		count = count * 10;
	}

	for ( ; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + 48);
	}
}
