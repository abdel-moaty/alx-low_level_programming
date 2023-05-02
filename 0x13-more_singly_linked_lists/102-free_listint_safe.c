#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head of list
 * Return: Size of List
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t size = 0;

	if (h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			return (size);
		}
		current = next;
	}
	*h = NULL;
	return (size);
}
