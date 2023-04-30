#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: 1 (Success), or -1 If Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	previous = *head;
	current = (*head)->next;
	while (current != NULL)
	{
		if (count + 1 == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		count++;
		previous = current;
		current = current->next;
	}
	return (-1);
}
