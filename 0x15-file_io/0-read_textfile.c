#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	char *buff;
	int f;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	n_read = read(f, buff, letters);
	if (n_read == -1)
		return (0);
	n_written = write(STDOUT_FILENO, buff, n_read);
	free(buff);
	close(f);
	if (n_written == -1 || n_written != n_read)
		return (0);
	return (n_written);
}
