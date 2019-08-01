#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add node at the end
 * Return: address of new element
 * @str: new data
 * @head: head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *node, *last;

	if (!string)
		return (0);
	node = malloc(sizeof(list_t));
	if (!node)
		return (0);
	node->str = string;
	node->len = _strlen(string);
	node->next = NULL;

	last = get_last(head);

	if (last)
		last->next = node;
	else
		*head = node;

	return (node);
}
/**
 * get_last - get last node of LL
 * Return: address of last element
 * @head: head node
 */
list_t *get_last(list_t **head)
{
	list_t *last = *head;

	if (!last)
		return (0);

	while (last->next)
		last = last->next;
	return (last);
}
