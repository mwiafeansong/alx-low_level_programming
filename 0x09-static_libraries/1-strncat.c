#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to another
 * @dest: string to add to
 * @src: string to take n bytes to add
 * @n: numbr of bytes of src to add
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j == n)
			break;
		dest[len_dest + j] = src[j];
	}

	return (dest);
}
