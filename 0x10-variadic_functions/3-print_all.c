#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of argument
 *
 * Return: None
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int c = 0, i = 0, j = 0;
	char *str;

	while (format && (format[i] != '\0'))
		i++;
	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				c = 1;
				break;
			case 's':
				str = va_arg(args, char*);
				c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
		}
		if ((format[j] != format[i - 1]) && c)
			printf(", ");
		j++;
		c = 0;
	}
	printf("\n");
	va_end(args);
}

