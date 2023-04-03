#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:string
 * @accept: string
 * Return: Number of Bytes in Initial Segment of s,
 * Consisting Only of Bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	char *a;

	while (*s && !found)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		{
			return (count);
		}
		s++;
		found = 0;
	}
	return (count);
}
