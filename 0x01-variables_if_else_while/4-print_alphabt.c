#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'e' || abc == 'q')
			continue;
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
