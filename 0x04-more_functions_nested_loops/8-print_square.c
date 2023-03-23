#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of square
 */
void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
