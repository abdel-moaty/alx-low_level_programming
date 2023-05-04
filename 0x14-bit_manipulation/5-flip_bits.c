#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: Number of Bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	unsigned int bits = 0;

	for (; l > 0; l >>= 1)
	{
		bits += l & 1;
	}
	return (bits);
}
