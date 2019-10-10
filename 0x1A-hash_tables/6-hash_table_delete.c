#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];

		if (node)
		{
			while (node)
			{
				hash_node_t *next = node->next;

				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
