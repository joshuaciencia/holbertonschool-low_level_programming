#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add new node to list
 * @head: head node
 * @str: string of node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *node;

	if (!string)
		return (0);
	node = malloc(sizeof(list_t));
	if (!node)
		return (0);
	node->str = string;
	node->len = _strlen(string);
	node->next = (*head);
	(*head) = node;
	return (node);
}
