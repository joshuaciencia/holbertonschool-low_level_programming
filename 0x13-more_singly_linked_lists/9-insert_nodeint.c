#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given pos
 * @head: head node
 * @idx: index pos
 * @n: new node data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;

	if (!*head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	while (*head)
	{
		if (i == idx - 1)
		{
			node->next = (*head)->next;
			(*head)->next = node;
			break;
		}
		*head = (*head)->next;
		i++;
	}
	return (node);
}
