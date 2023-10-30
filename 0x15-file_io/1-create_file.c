#include "main.h"
/**
*create_file - Creates a file.
*@filename: file to be created.
*@text_content: a NULL terminated string to write to the file.
*Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t content_length;

	if (filename == NULL)
	{
	return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
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
