#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int x = 1, y = 2, z;

	printf("%ld, %ld", x, y);
	for (i = 3; i <= 50; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
