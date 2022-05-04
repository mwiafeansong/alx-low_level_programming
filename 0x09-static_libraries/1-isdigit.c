#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 *
 * Return: 0 if false, 1 if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
