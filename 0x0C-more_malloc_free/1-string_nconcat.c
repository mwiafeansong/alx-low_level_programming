#include <stdlib.h>
#include "main.h"

/**
 * _strlen - fnds length of a string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	unsigned int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
		n++;

	return (n);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string to concatenate
 *
 * Return: pointer to new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n > len_s2)
		n = len_s2;

	p = malloc((len_s1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
