#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z >= 100)
				{
					_putchar(z / 100 + '0');
					_putchar((z / 10) % 10 + '0');
				}
				else if (z >= 10)
				{
					_putchar(' ');
					_putchar(z / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar (z % 10 + '0');
			}
			_putchar ('\n');
		}
	}
}
