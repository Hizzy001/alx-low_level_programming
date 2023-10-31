#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_bytes_written, num_bytes_appended;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
	close(fd);
	return (1);
	}

	num_bytes_appended = 0;
	while (text_content[num_bytes_appended])
	num_bytes_appended++;

	num_bytes_written = write(fd, text_content, num_bytes_appended);
	close(fd);

	if (num_bytes_written == num_bytes_appended)
	return (1);
	else
	return (-1);
}
