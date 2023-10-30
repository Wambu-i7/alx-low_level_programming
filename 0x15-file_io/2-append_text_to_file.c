#include "main.h"
/**
 * append_text_to_file - appends text to a file.
 * @filename: File to append on.
 * @text_content: Text to be appended.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	size_t content_length;
	int fd;

	if (filename == NULL)
	{
	return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	content_length = strlen(text_content);
	bytes_written = write(fd, text_content, content_length);
	if ((size_t)bytes_written != content_length)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}
