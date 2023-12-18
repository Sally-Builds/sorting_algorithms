#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	if (curr == NULL)
	{
		exit(1);
	}

	while (curr != NULL)
	{
		listint_t *j = curr->prev;
		while (j->prev != NULL)
		{
			if (j->n > curr->n)
			{

			}
		}	
	}
}
