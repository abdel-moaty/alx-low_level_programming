#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0, start, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
