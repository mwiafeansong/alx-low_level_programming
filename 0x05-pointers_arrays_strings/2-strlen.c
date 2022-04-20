#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != 0; i++)
	{
		sum = sum + 1;
	}

	return (sum);
}
