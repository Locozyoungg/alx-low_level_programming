#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define ERROR_ARG_COUNT 97
#define ERROR_READ_FILE 98
#define ERROR_WRITE_FILE 99
#define ERROR_CLOSE_FD 100

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
const char *file_from;
const char *file_to;
int source_fd, dest_fd;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

if (argc != 3) {
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(ERROR_ARG_COUNT);
}

file_from = argv[1];
file_to = argv[2];

source_fd = open(file_from, O_RDONLY);
if (source_fd == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(ERROR_READ_FILE);
}

dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
if (dest_fd == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(source_fd);
exit(ERROR_WRITE_FILE);
}

while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(source_fd);
close(dest_fd);
exit(ERROR_WRITE_FILE);
}
}

if (bytes_read == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(source_fd);
close(dest_fd);
exit(ERROR_READ_FILE);
}

if (close(source_fd) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(ERROR_CLOSE_FD);
}

if (close(dest_fd) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(ERROR_CLOSE_FD);
}

return (0);
}
