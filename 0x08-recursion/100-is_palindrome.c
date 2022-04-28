#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * iteration - iterate through the string
 * @s: the string
 * @i: iterator
 *
 * Return: 0 or 1
 */

int iteration(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == s[i])
		return (iteration(s + 1, i - 2));
	else
		return (0);
}

/**
 * is_palindrome: checks if a string is a palindrome
 * @s: the string
 *
 * Return: 0 if false, 1 if true
 */

int is_palindrome(char *s)
{
	int i = _strlen(s);

	return (iteration(s, i - 1));
}
