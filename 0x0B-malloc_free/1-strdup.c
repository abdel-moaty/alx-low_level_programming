#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: Pointer to Duplicated String, NULL If Insufficient Memory
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
