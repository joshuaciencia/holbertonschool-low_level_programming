#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - returns the value of a key
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node = 0;

	if (!ht || !strlen(key))
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[idx];

	if (!node)
		return (0);
	else
		return (node->value);
}
