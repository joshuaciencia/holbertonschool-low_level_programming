#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints all elements in a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int idx = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = (ht->array)[i];

		if (node)
		{
			if (idx != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			idx++;
		}
	}
	printf("}\n");
}
