#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The number of bytes that were read and printed, or 0 if an error
 * occurred or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    ssize_t file_descriptor, bytes_read, bytes_written, total_bytes_written;

    if (filename == NULL)
        return (0);

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(file_descriptor);
        return (0);
    }

    bytes_read = read(file_descriptor, buffer, letters);
    total_bytes_written = 0;

    while (bytes_read > 0 && total_bytes_written < bytes_read)
    {
        bytes_written = write(STDOUT_FILENO, buffer + total_bytes_written,
                              bytes_read - total_bytes_written);
        if (bytes_written == -1)
        {
            free(buffer);
            close(file_descriptor);
            return (0);
        }
        total_bytes_written += bytes_written;
    }

    free(buffer);
    close(file_descriptor);

    if (bytes_read == -1 || total_bytes_written < bytes_read)
        return (0);

    return (total_bytes_written);
}

