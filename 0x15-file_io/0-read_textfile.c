#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: file to read from
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);
	free(buf);

	return (nwrite);
}
