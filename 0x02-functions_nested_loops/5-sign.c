#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: value
 * Return: 1 if postive, -1 if negative, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
