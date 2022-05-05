#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string
 * @str: string to be copied
 *
 * Return: pointer to copy of string or NULL
 */

char *_strdup(char *str)
{
	int i, j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	char *p = malloc((len + 1) * sizeof(char));

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= len; j++)
			p[j] = str[j];
		return (p);
	}
}
