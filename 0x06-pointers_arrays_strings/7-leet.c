#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char replacee[] = {65, 69, 79, 84, 76, 97, 101, 111, 116, 108};
	char replacer[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == replacee[j])
				s[i] = replacer[j];
		}
	}

	return (s);
}
