#include "main.h"

/**
 * read_textfile - reads text file nad prints to standard output
 * @filename: text file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, nwrite;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters *sizeof(char));
	if (buf == NULL)
		return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
		return (0);
	nwrite = write(STDOUT_FILENO, buf, letters);
	if (nwrite == -1)
		return (0);

	close(fd);
	free(buf);

	return (nwrite);
}
