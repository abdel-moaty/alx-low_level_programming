#include <string.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 If Palindrome, 0 If Not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_indeed(s, 0, len - 1));
}

/**
 * is_palindrome_indeed - checks if a string is a palindrome
 * @s: string
 * @start: starting index of substring
 * @end: ending index of substring
 * Return: 1 If Palindrome, 0 If Not
 */
int is_palindrome_indeed(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_indeed(s, start + 1, end - 1));
	}
}
