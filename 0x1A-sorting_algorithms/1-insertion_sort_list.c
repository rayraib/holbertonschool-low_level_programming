#include "sort.h"
/**
* insertion_sort_key - sort a doubly linked list of integers
*                        in ascending order
* @key: pointer to the list of linked list
*/
int swap_nodes(listint_t **list);
void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t *key;

	key = (*list);
	if (list != NULL && *list != NULL)
	{
		while (key->next != NULL)
		{
			key = key->next;
			i = 0;
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
			while ( i != 0)
			{
				key = key->next;
				i--;
			}
		}
	}
}
/*
int swap_nodes(listint_t **list)
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
