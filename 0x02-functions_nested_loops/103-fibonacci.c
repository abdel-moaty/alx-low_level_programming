#include <stdio.h>

/**
 * main - prints the sum of the even-valued Fibonacci up to 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 1, y = 2, z = 2, t;

	while (y <= 4000000)
	{
		t = y;
		y = x + y;
		x = t;
		if (y % 2 == 0)
		{
			z = z + y;
		}
	}
	printf("%d\n", z);
	return (0);
}
