#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
