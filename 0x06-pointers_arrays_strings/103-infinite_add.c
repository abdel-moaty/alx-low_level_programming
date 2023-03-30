#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: Pointer to Result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, length, digit1, digit2, carry = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	length = (i > j) ? i : j;
	if (length + 1 > size_r)
		return (0);
	r[length] = '\0';
	for (k = length - 1; k >= 0; k--)
	{
		i--;
		j--;
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		r[k] = (digit1 + digit2 + carry) % 10 + '0';
		carry = (digit1 + digit2 + carry) / 10;
	}
	if (carry == 1)
	{
		r[length + 1] = '\0';
		if (length + 2 > size_r)
			return (0);
		while (length-- >= 0)
			r[length + 1] = r[length];
		r[0] = carry + '0';
	}
	return (r);
}
