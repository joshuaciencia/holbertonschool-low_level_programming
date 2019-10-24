#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;

	while (curr)
	{
		listint_t *rev = curr;

		while (rev->prev && rev->prev->n > rev->n)
		{
			/* swap nodes */
			listint_t *prev = rev->prev->prev;
			listint_t *next = rev->next;

			rev->next = rev->prev;
			rev->prev->prev = rev;

			if (prev)
				prev->next = rev;
			if (next)
				next->prev = rev->prev;

			rev->prev->next = next;
			rev->prev = prev;
			rev = rev->prev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
