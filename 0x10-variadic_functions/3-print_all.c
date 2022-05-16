#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: None
 */

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @args: list of arguments
 *
 * Return: None
 */

void print_int(va_list args)
{
	int n;

	n = va_arg(args, int);
	printf("%d", n);
}

/**
 * print_float - prints a floating point number
 * @args: list of arguments
 *
 * Return: None
 */

void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @args: list of arguments
 *
 * Return: None
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	print("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 * @...: variable number of arguments/parameters
 *
 * Return: None
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}	
