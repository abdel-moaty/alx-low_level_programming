#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
