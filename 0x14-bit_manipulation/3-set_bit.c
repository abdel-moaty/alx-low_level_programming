#include <limits.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: index
 * Return: 1 (Success), or -1 If Error Occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
