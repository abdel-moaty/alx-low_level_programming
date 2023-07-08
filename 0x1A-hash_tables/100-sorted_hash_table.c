#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of array
 * Return: Pointer to Newly Created Sorted Hash Table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
	{
		return (NULL);
	}
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table
 * @key: key
 * @value: key value
 * Return: 1 (Success), 0 Otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *node, *prev_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	prev_node = NULL;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		if (strcmp(node->key, key) > 0)
			break;
		prev_node = node;
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (prev_node == NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = prev_node->next;
		prev_node->next = new_node;
	}
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->sprev = NULL;
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (strcmp(new_node->key, ht->stail->key) > 0)
		{
			new_node->sprev = ht->stail;
			new_node->snext = NULL;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			node = ht->shead;
			while (node != NULL && strcmp(new_node->key, node->key) > 0)
				node = node->snext;
			new_node->sprev = node->sprev;
			new_node->snext = node;
			node->sprev->snext = new_node;
			node->sprev = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table
 * @key: key
 * Return: Element value, or NULL (if key could not be found)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	first = 1;
	node = ht->shead;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	first = 1;
	node = ht->stail;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node != NULL)
	{
		next = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = next;
	}
	free(ht->array);
	free(ht);
}
