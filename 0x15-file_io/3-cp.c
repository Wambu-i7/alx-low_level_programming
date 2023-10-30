#include"main.h"
/**
 * print_error - Prints error.
 * @message: Error message.
 * @exit_code: Exit code.
 */

#define BUFFER_SIZE 1024

void print_error(const char *message, int exit_code)
{
	fprintf(stderr, "%s\n", message);
	exit(exit_code);
}
/**
* main - Entry pioint.
* @argc: Argument Count.
* @argv: Argument Vector.
* Return: Always 0 for success.
*/
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	print_error("Usage: cp file_from file_to", 97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	print_error("Error: Can't read from file", 98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	print_error("Error: Can't write to file", 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	if (write(fd_to, buffer, bytes_read) != bytes_read)
	{
	print_error("Error: Can't write to file", 99);
	}
	}
	if (bytes_read == -1)
	{
	print_error("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1)
	{
	print_error("Error: Can't close fd", 100);
	}
	if (close(fd_to) == -1)
	{
	print_error("Error: Can't close fd", 100);
	}
	return (0);
}
