#include <limits.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: Value of Bit at Index index, or -1 If Error Occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index < sizeof(n) * CHAR_BIT) ?
		((n >> index) & 1) : (unsigned long int)(-1));
}
