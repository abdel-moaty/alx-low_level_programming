#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int b, s;

	if (n <= 0)
		_putchar('\n');
	for (b = 0; b < n; b++)
	{
		for (s = 0; s <= b; s++)
		{
			if (b == s)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
}
