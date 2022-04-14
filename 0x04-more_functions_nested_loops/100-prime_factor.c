#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n;
	long i;

	n = 612852475143

	for (i = 2; n > i; i++)
	{
		while (n % i == 0)
			n = n / i;
	}
	printf("%lu", i);
	printf("\n");

	return (0);
}
