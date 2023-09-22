#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, total_bytes = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	while (text_content[total_bytes] != '\0')
		total_bytes++;

	if (write(file_d, text_content, total_bytes) == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
