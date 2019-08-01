#include "lists.h"
/**
 * list_len - returns the number of elements in list
 * Return: num of elements in list
 * @h: list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
