#include "sort.h"

/**
 * insertion_sort_list - Function that sort a list using insertion sort
 * @list: double pointer to the first node of the list
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *forward = *list, *backward, *tmp, *ftmp;

	while (forward)
	{
		backward = forward;
		while (backward->prev && backward->n < backward->prev->n)
		{
			tmp = backward->prev;
			ftmp = backward->prev->prev;

			if (ftmp)
			{
				ftmp->next = backward;
			}

			tmp->next = backward->next;
			backward->next = tmp;

			if (tmp->next)
			{
				tmp->next->prev = tmp;
			}

			backward->prev = ftmp;
			tmp->prev = backward;

			if (backward->prev == NULL)
			{
				*list = backward;
			}
			print_list(*list);
		}
		forward = forward->next;
	}
}
