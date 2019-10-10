#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds a new value to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = 0, *idx_node = 0;

	if (!strlen(key) || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	idx_node = (ht->array)[index];

	(ht->array)[index] = new_node;
	new_node->next = idx_node;
	return (1);
}
