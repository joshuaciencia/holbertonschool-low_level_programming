#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - get nth node in a dll
 * Return: 1 if success, 0 otherwise
 * @head: head node
 * @index: nth node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i = 0;
	dlistint_t *current;

	if (!*head)
		return (-1);

	current = *head;
	while (current)
	{
		if (i == index)
		{
			
		}
	}

}
