#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add not at the beginning
 * Return: pointer to node
 * @head: head node
 * @n: data
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (0);

	new->n = n;
	new->prev = 0;
	if (!*head)
	{
		new->next = 0;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
