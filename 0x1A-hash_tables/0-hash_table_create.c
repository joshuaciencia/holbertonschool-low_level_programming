#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = 0;
	hash_node_t **array = 0;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (0);

	ht->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = 0;

	ht->array = array;
	return (ht);
}
