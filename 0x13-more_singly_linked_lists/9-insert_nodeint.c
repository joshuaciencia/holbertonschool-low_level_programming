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
	listint_t *node, *prev;

	if (!head)
		return (0);

	if (idx == 0)
	{
		node = add_nodeint(head, n);
		return (node);
	}

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;

	prev = get_nodeint_at_index(*head, idx - 1);
	if (!prev)
	{
		free(node);
		return (0);
	}

	node->next = prev->next;
	prev->next = node;
	return (node);
}
/**
 * get_nodeint_at_index - get node at index
 * @head: head node
 * @index: index node
 * Return: address of index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	if (!node)
		return (0);

	while (node)
	{
		if (index == i)
			return (node);
		i++;
		node = node->next;
	}
	return (0);
}
/**
 * add_nodeint - add not at start
 * Return: pointer to node
 * @head: head node
 * @n: new node data
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
