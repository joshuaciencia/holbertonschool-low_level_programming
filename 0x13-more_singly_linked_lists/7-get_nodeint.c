#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head node
 * @index: index node
 * Return: address of index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (0);
}
