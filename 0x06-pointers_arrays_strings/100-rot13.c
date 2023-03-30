#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: string
 * Return: Pointer to Modified String
 */
char *rot13(char *str)
{
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *dest = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = dest[j];
				break;
			}
		}
	}
	return (str);
}
