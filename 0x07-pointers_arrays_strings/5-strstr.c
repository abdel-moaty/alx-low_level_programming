#include <stddef.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to Beginning of Located Substring, or NULL if Not Found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
