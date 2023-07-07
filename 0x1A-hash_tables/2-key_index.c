#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key
 * @size: size of array of hash table
 * Return: Index at Which Key/Value Pair Should be
 * Stored in Array of Hash Table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
