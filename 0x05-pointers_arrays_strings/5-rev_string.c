#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: None
 */

void rev_string(char *s)
{
	int i, j;
	int len = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}
}
