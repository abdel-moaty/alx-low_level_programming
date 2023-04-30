#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 * Return: Number of Nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = NULL, *fast = NULL;
	size_t count = 0, steps;

	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = head;
		steps = 0;
		while (steps < count)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (count);
			}
			fast = fast->next;
			steps++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
