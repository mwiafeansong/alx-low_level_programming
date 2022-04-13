#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int fib;
	int i;
	int sum = 2;

	for (i = 0; i < 50; i++)
	{
		fib = num1 + num2;
		if (fib % 2 == 0)
			sum += fib;
		if (fib > 4000000)
			break;
		num1 = num2;
		num2 = fib;
	}
	printf("%d\n", sum);

	return (0);
}
