#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print list
 * @head: head node
 * Return: amount of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0, i, iterator = 1;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head && iterator)
	{
		tmp[size] = head;
		size++;
		printf("[%p] %d\n", (void *)head, head->n);
		for (i = 0; i < size; i++)
		{
			if (tmp[i] == head->next)
			{
				iterator = 0;
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				break;
			}
		}
		head = head->next;
	}
	return (size);
}
