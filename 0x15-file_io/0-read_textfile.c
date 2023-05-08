#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to string containing name of file
 * @letters: number of letters
 * Return: Actual Number of Letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read, written;
	size_t total = 0;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	while ((read = fread(buffer, sizeof(char), letters, file)) > 0
	       && total < letters)
	{
		written = write(STDOUT_FILENO, buffer, read);
		if (written == -1 || written != read)
		{
			free(buffer);
			fclose(file);
			return (0);
		}
		total += read;
	}
	free(buffer);
	if (fclose(file) == EOF)
	{
		return (0);
	}
	return (total);
}
