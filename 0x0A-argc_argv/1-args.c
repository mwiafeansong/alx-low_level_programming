#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
