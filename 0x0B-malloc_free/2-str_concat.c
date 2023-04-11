#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to Newly Allocated Space in Memory,
 * Containing Contents of s1 Followed by Contents of s2 and Null Terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result + len1, s2);
	result[len1 + len2] = '\0';
	return (result);
}
