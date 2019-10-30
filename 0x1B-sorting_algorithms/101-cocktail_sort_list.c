#include "sort.h"

/**
 * cocktail_sort_list - sorts dll
 * @list: head node of dll
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;
	listint_t *curr, *prev, *next, *swap;

	if (!list)
		return;
	if (*list && !(*list)->next)
		return;
	curr = *list;
	while (swapped)
	{
		swapped = 0;
		while (curr->next)
		{
			if (curr->n > curr->next->n)
			{
				prev = curr->prev;
				swap = curr->next;
				next = swap->next;
				curr->next = next;
				curr->prev = swap;
				swap->next = curr;
				swap->prev = prev;
				if (prev)
					prev->next = swap;
				if (next)
					next->prev = curr;
				if (!prev)
					*list = swap;
				print_list(*list);
				swapped = 1;
			}
			else
				curr = curr->next;
		}
		if (!swapped)
			break;
		swapped = 0;
		while (curr->prev)
		{
			if (curr->n < curr->prev->n)
			{
				swap = curr->prev;
				next = curr->next;
				prev = swap->prev;
				curr->next = swap;
				curr->prev = prev;
				swap->next = next;
				swap->prev = curr;
				if (prev)
					prev->next = curr;
				if (next)
					next->prev = swap;
				if (!prev)
					*list = curr;
				print_list(*list);
				swapped = 1;
			}
			else
				curr = curr->prev;
		}
	}
}
