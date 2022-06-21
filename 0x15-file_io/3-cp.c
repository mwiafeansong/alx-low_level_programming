#include "main.h"

/**
 * open_error - checks if a file can be opened, written to or read from
 * @file_from: source file
 * @file_to: destination file
 * @argv: command line arguments
 *
 * Return: None
 */

void open_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't rad from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nread, nwrite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	open_error(file_from, file_to, argv);

	nread = 1024;
	while (nread == 1024)
	{
		nread = read(file_from, buf, 1024);
		if (nread == -1)
			open_error(-1, 0, argv);
		nwrite = write(file_to, buf, nread);
		if (nwrite == -1)
			open_error(-1, 0, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
