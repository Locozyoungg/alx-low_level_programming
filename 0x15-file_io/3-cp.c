#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* error_exit - prints an error message and exits with the specified code
* @code: exit code
* @message: error message
*/
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 97, 98, 99, or 100 on error
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file");

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
error_exit(99, "Error: Can't write to file");

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
error_exit(99, "Error: Can't write to file");
}

if (bytes_read == -1)
error_exit(98, "Error: Can't read from file");

if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd");

if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd");

return (0);
}

