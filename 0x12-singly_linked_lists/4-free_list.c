#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node = head;

	/* free strings */

	while (node)
	{
		free(node->str);
		node = node->next;
	}

	/* free nodes */

	while (head)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);
	}
}
/**
 * get_last_node - get last node of LL
 * Return: address of last element
 * @head: head node
 */
list_t *get_last_node(list_t *head)
{
	list_t *last = head;

	if (!last)
		return (0);

	while (last->next)
		last = last->next;
	return (last);
}
