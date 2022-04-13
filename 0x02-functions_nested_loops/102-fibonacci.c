#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int fib;
	int i;

	printf("%d, ", num1);
	printf("%d, ", num2);
	for (i = 0; i < 48; i++)
	{
		fib = num1 + num2;
		printf("%d", fib);
		if (i == 47)
			break;
		printf(", ");
		num1 = num2;
		num2 = fib;
	}
	printf("\n");

	return (0);
}
