#include "main.h"

/**
 * _islpha - checks for alphabets
 * @c: value to be checked
 *
 * Return: 0 if false, 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
