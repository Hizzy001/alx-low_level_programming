#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

void close_file(int fd);
void copy_file(const char *file_from, const char *file_to);
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);

if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
exit(98);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
exit(99);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);

if (bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
exit(99);
}
}

close_file(fd_from);
close_file(fd_to);
}
