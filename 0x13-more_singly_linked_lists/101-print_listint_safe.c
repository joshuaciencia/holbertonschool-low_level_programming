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
	int size = 0;
	const listint_t first;

	while (head && &first != head)
	{
		printf("%p %d\n", (void *)head, head->n);
		size++;wqwqw
		head = head->next;q
	}
	return (size);
}
/**
 * _printd - print any number
 * Return: void
 * @n: number
 */
void _printd(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		_printd(n1 / 10);
	_putchar(n1 % 10 + '0');
}
