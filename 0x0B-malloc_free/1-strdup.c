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
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
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
