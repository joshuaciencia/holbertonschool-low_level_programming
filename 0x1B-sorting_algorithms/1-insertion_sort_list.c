#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;

	while (curr)
	{
		listint_t *rev = curr;

		while (rev->prev && rev->prev->n > rev->n)
		{
			/* swap nodes */
			listint_t *next = rev->next;
			listint_t *left = rev->prev;
			listint_t *prev = left->prev;
			
			rev->next = left;
			rev->prev = prev;

			if (prev)
				prev->next = rev;

			left->next = next;
			left->prev = rev;

			if (next)
				next->prev = left;

			if (!rev->prev)
				*list = rev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
