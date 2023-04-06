#include <stddef.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: Pointer to First Occurrence of Character c in String s,
 * or NULL If not Found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
