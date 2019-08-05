#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new node to list at end
 * @head: head node
 * @n: node data
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	if (!head)
		return (0);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = 0;

	last = *head;
	if (!last)
	{
		*head = node;
		return (node);
	}

	while (last->next)
		last = last->next;
	last->next = node;
	return (node);
}
