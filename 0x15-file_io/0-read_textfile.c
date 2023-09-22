#include "main.h"
/**
 * read_textfile - teads a file
 * @filename: the file
 * @letters: chars
 * Return: int, number of char read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *text_buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	text_buffer = malloc(letters);
	if (text_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, text_buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(text_buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);

	free(text_buffer);
	close(file_descriptor);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
