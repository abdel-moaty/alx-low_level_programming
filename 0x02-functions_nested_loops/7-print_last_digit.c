#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: integar
 * Return: Last Digit
 */
int print_last_digit(int i)
{
	int D;

	D = i % 10;
	if (D < 0)
	{
		D = D * -1;
	}
	_putchar(D + '0');
	return (D);
}
