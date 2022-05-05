#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of command line arguments
 * @av: command line arguments
 *
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, s_len = 0;
	char *s;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[s_len + j] = av[i][j];
		s[s_len + j] = '\n';
		s_len = s_len + j + 1;
	}
	s[len + 1] = '\0';

	return (s);
}
