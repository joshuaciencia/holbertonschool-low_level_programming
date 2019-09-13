#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum data of dll
 * Return: int
 * @head: head node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
