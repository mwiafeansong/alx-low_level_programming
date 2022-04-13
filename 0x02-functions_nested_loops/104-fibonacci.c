#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int fib;
	int i;

	printf("%lu, ", num1);
	printf("%lu, ", num2);

	for (i = 0; i < 98; i++)
	{
		fib = num1 + num2;
		printf("%lu", fib);
		if (i == 97)
			break;
		printf(", ");
		num1 = num2;
		num2 = fib;
	}
	printf("\n");

	return (0);
}
