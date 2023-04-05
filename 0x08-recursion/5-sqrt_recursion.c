#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: Natural Square Root of Number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}

/**
 * find_sqrt - finds the square root of a number using binary search
 * @n: number
 * @start: starting value
 * @end: ending value
 * Return: Square Root of n
 */
long find_sqrt(long n, long start, long end)
{
	long mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		if (mid == end)
		{
			return (-1);
		}
		else
		{
			return (find_sqrt(n, mid + 1, end));
		}
	}
	else
	{
		if (mid == start)
		{
			return (-1);
		}
		else
		{
			return (find_sqrt(n, start, mid - 1));
		}
	}
}
