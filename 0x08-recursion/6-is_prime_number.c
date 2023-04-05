#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1 If Input Integer is Prime Number, 0 Otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}

/**
 * is_prime - checks if an integer is a prime number
 * @n: number
 * @i: divisor
 * Return: 1 If Integer is Prime Number, 0 Otherwise
 */

int is_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}
