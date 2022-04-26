#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to get from
 * @accept: the prefix substring
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		
		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (count);
}
