#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * count_words - count the number of words in a string
 * @str: string
 * Return: Number of Words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	while (isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (!isspace(str[i]))
		{
			count++;
			while (!isspace(str[i]) && str[i] != '\0')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	if (count == 0)
	{
		return (0);
	}
	return (count);
}
/**
 * word_length - determine the length of a word in a string
 * @str: string
 * Return: Length of Word
 */
int word_length(char *str)
{
	int len = 0;

	while (!isspace(str[len]) && str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * free_all - free all previously allocated memory
 * @words: array of words
 * @index: index
 * Return: NULL
 */
char **free_all(char **words, int index)
{
	int i;

	for (i = 0; i < index; i++)
	{
		free(words[i]);
	}
	free(words);
	return (NULL);
}
/**
 * **strtow - splits a string into words
 * @str: string
 * Return: Pointer to Array of Strings (Words)
 */
char **strtow(char *str)
{
	int i, j, len, word_count = 0;
	char **words, *word;

	if (str == NULL || *str == '\0' ||
	    (isspace(*str) && *(str + 1) == '\0'))
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (!isspace(str[i]))
			break;
	if (str[i] == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < word_count; i++)
	{
		while (isspace(*str))
		{
			str++;
		}
		len = word_length(str);
		word = malloc((len + 1) * sizeof(char));
		if (word == NULL)
		{
			return (free_all(words, i));
		}
		for (j = 0; j < len; j++)
		{
			word[j] = str[j];
		}
		word[j] = '\0';
		words[i] = word;
		str += len;
	}
	words[i] = NULL;
	return (words);
}
