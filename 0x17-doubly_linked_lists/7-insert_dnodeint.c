#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given position
 * Return: pointer to node
 * @h: list
 * @idx: index node
 * @n: data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (!h)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	current = *h;

	while (current)
	{
		if (i == idx)
		{
			new->prev = current->prev;
			new->prev = 0;
			if (current->prev)
				current->prev->next = new;
			new->next = current;
			current->prev = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	if (i == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	free(new);
	return (0);
}
