#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of fil to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on successs, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nwrite;
	int i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	nwrite = write(fd, text_content, i);
	if (nwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
