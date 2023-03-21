#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char abc, x10;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
