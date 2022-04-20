#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to use
 *
 * Return: None
 */

void puts_half(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}

	if (len % 2 == 0)
	{
		for (j = (len / 2); j < len; j++)
			_putchar(str[j]);
	}
	else if (len % 2 == 1)
	{
		for (j = ((len - 1) / 2); j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
