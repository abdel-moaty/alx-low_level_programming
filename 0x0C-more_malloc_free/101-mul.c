#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - checks if a string is a number
 * @str: string
 * Return: 1 If Number, 0 Otherwise
 */
int is_number(char *str)
{
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	for (; *str != '\0'; str++)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 (Success), 98 Otherwise
 */
int main(int argc, char **argv)
{
	int i, j, res_len, carry, sum, num1_len, num2_len, *result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		return (98);
	}
	num1_len = strlen(num1);
	num2_len = strlen(num2);
	res_len = num1_len + num2_len;
	result = calloc(res_len, sizeof(int));
	if (result == NULL)
		return (1);
	for (i = num1_len - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = num2_len - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') +
				result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] = carry;
	}
	for (i = 0; i < res_len - 1 && result[i] == 0; i++)
		;
	for (; i < res_len; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}
