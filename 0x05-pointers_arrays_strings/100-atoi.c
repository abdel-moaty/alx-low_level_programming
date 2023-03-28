#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		else if (s[index] >= '0' && s[index] <= '9')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10
						   && (s[index] - '0') > INT_MAX % 10))
			{
				num = (sign == 1) ? INT_MAX : INT_MIN;
				break;
			}
			num = num * 10 + (s[index] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		index++;
	}
	if (sign == -1 && num == INT_MIN)
	{
		return (INT_MIN);
	}
	return (sign * num);
}
