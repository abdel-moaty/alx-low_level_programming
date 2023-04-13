#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space
 * @new_size: size of new memory block
 * Return: Pointer to Newly Allocated Memory Block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	else if (new_size <= old_size)
	{
		new_ptr = ptr;
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
