#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
    int fd_from, fd_to, bytes_read, bytes_written, close_status;
    char buf[BUF_SIZE];
    
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
    
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    
    fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        exit(99);
    }
    
    while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0) {
        bytes_written = write(fd_to, buf, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
            exit(99);
        }
        if (bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Incomplete write to file %s\n", argv[2]);
            exit(99);
        }
    }
    
    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    
    close_status = close(fd_from);
    if (close_status == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    
    close_status = close(fd_to);
    if (close_status == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    
    return 0;
}

