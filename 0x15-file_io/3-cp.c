#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @ac: arg count
 * @av: arg vector
 *
 * Return: Return: 0 on success, exit with error code otherwise
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from), exit(99);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from), close(file_to), exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(file_from), close(file_to), exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to),	exit(100);
	}
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
