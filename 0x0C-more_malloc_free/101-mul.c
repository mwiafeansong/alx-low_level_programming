#include "main.h"

/**
 * _puts - prints a string, then a new line
 * @str: string to print
 *
 * Return: none
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _atoi - converts ascii to integer
 * @s: the string
 *
 * Return: integer
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int first_num, i, resp = 0;

	for (first_num = 0; !(s[first_num] >= 48 && s[first_num] <= 57); first_num++)
	{
		if (s[first_num] == '-')
			sign *= -1;
	}

	for (i = first_num; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer
 * @n: integer
 *
 * Return : None
 */

void print_int(unsigned long int n)
{
	unsigned long int i, resp, divisor = 1;

	for (i = 0; (n / divisor) > 9; i++)
		divisor *= 10;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar(resp + '0');
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 if success
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

