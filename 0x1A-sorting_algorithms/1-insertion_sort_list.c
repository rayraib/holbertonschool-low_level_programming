#include "sort.h"
/**
* insertion_sort_list- sort a doubly linked list of integers
*                        in ascending order
* @list: pointer to the list of linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *key;
	listint_t *tmp;

	key = (*list);
	if (list != NULL && *list != NULL)
	{
		while (key->next != NULL)
		{
			key = key->next;
			tmp = key;
			/* loop as long as n value of previous node is bigger*/
			while (key->prev != NULL && key->n < key->prev->n)
			{
				/*swap the nodes */
				key->prev->next = key->next;
				key->next = key->prev;
				key->prev = key->next->prev;
				key->next->prev = key;
				if (key->next->next)
					key->next->next->prev = key->next;
				if (key->prev)
					key->prev->next = key;
				else
					/*re-assign key as new head of node*/
					*list = key;
				print_list(*list);
			}
			/* re-assign key back to the correct index position*/
			key = tmp;
		}
	}
}
/*
{
	int i;
	listint_t *key;

	key = *list;
	while (key->prev != NULL && key->n < key->prev->n)
	{
		key->prev->next = key->next;
		key->next = key->prev;
		key->prev = key->next->prev;
		key->next->prev = key;
		if (key->next->next)
			key->next->next->prev = key->next;
		if (key->prev)
			key->prev->next = key;
		else
			*list = key;
		i++;
		print_list(*list);
	}
	return (i);
}
*/
