File I/O Tasks
This repository contains solutions to the following file I/O tasks:

0. Tread lightly, she is near
Write a function read_textfile that reads a text file and prints it to the POSIX standard output. The function takes two arguments: filename (the name of the file to be read) and letters (the number of letters to be read and printed). The function returns the actual number of letters it could read and print. If the file cannot be opened or read, the function returns 0. If filename is NULL, the function returns 0. If write fails or does not write the expected amount of bytes, the function returns 0.

1. Create a file
Write a function create_file that creates a file with the specified filename and writes the text_content to it. The function returns 1 on success and -1 on failure. If the file already exists, the function truncates it. The created file must have permissions rw-------. If filename is NULL, the function returns -1. If text_content is NULL, the function creates an empty file.

2. Append text to a file
Write a function append_text_to_file that appends the text_content to the end of the file with the specified filename. The function returns 1 on success and -1 on failure. If the file does not exist, the function does not create it. If filename is NULL, the function returns -1. If text_content is NULL, the function does not add anything to the file.

3. Copy the content of a file to another file
Write a program cp that copies the content of the file file_from to the file file_to. If the number of arguments is incorrect, the program exits with code 97 and prints "Usage: cp file_from file_to" on the POSIX standard error. If file_to already exists, the program truncates it. If file_from does not exist or cannot be read, the program exits with code 98 and prints "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error. If the program cannot create or write to file_to, the program exits with code 99 and prints "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error. If the program cannot close a file descriptor, the program exits with code 100 and prints "Error: Can't close fd FD_VALUE" on the POSIX standard error. The permissions of the created file are rw-rw-r--. The program reads 1,024 bytes at a time from file_from to make fewer system calls and uses a buffer. The program is allowed to use dprintf.
