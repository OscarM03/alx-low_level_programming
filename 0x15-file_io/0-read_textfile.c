#include "main.h"
/**
 * read_textfile - Reads a file and prints its content to stdout
 * @filename: The file path
 * @letters: The number of characters to read and print
 * Return: The number of characters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r_bytes;
	ssize_t w_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buf, letters);
	if (r_bytes == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buf, r_bytes);

	free(buf);
	close(fd);

	if (w_bytes != r_bytes)
		return (0);

	return (r_bytes);
}
