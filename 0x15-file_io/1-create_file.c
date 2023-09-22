#include "main.h"
/**
 * manual_strlen - Computes the length of a string manually.
 * @input: Pointer to the string to be measured.
 * Return: Length of the string.
 */
int manual_strlen(char *input)
{
	int length = 0;

	while (*input)
	{
		length++;
		input++;
	}

	return (length);
}
/**
 * create_file - Creates a new file or truncates an existing one.
 * @filename: Name of the file to be created or modified.
 * @text_content: NULL-terminated string to be written to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	bytes_written = write(file_d, text_content, manual_strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
