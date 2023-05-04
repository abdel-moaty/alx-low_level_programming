#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: Converted Number, or 0 If
 * One or More Chars in String b is Not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t i = 0;
	size_t j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (; j < i; j++)
	{
		result = (result << 1) + (b[j] - '0');
	}
	return (result);
}
