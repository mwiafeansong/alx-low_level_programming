#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *s))
{
	if (!name || !f)
		return;
	f(name);
}
