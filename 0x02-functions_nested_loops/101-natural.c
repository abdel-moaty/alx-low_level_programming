#include <stdio.h>

/**
 * main - calculates sum of multiples of 3 or 5 below 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
