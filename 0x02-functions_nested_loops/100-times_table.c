#include "main.h"

/**
 * print_times_table - prints times table
 * @n: number times table to print
 *
 * Return: None
 */

void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				prod = i * j;
				if (prod <= 9)
				{
					_putchar(prod + '0');
				}
				else if (prod > 9 && prod < 100)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && prod < 1000)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
