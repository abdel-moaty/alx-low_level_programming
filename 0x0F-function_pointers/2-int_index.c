#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: Index of First Element for Which cmp Does Not Return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (index);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
	}
	return (index);
}
