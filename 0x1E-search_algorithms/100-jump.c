#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: First Index Where value is Located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
			for (i = prev - step; i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return ((int)i);
				}
			}
			return (-1);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
	for (i = prev - step; i <= prev; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
