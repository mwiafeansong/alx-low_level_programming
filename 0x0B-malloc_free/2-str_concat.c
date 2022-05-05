#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	int len_s1 = 0, len_s2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;

	p = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < len_s1; a++)
			p[a] = s1[a];
		for (b = 0; b < len_s2; b++)
			p[a + b] = s2[b];
		p[a + b] = '\0';
		return (p);
	}
}
