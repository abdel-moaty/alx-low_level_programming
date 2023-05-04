#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 If Big endian, 1 If Little Endian
 */
int get_endianness(void)
{
	unsigned int i = 1;

	return (*(char *)&i == 1);
}
