#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, int *argv[])
{
	char *ops = (char *) main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ops[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
