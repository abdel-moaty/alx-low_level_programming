#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on Success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
