#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to add to
 * @src: string to add
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len_dest + j] = src[j];
	}

	return (dest);
}
