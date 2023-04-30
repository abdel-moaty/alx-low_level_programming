#include <stddef.h>
#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 * Return: Pointer to First Node of Reversed List
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (previous);
}
