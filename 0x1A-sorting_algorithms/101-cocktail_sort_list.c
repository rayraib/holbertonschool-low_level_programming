#include "sort.h"

void swap_nodes(listint_t **list, listint_t *key, listint_t *compare);
/**
* cocktail_sort_list - Sort a doubly linked list of integers in ascending order
* 		       using Cocktail shaker sort
* @list: Double pointer the the head node of the linked list
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *key;
	listint_t *compare;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	key = *list;
	compare = key->next;
	while (compare != NULL)
	{
		/* swap nodes*/
		if (key->n > compare->n)
		{
			/*if (compare->next)
				compare->next->prev = key;
			if (key->prev)
				key->prev->next = compare;
			else
				*list = compare;
			compare->prev = key->prev;
			key->prev = compare;
			key->next = compare->next;
			compare->next = key;*/
			swap_nodes(&(*list), key, compare);
			compare = key->next;
		}
		else 
		{
			/*move key and compare one node forward each*/
			key = compare;
			compare = compare->next;
		}
	}
	key = key->prev->prev;
	compare = key->next;
	while (key != NULL)
	{
		if (key->n > compare->n)
		{
			/*if (compare->next)
				compare->next->prev = key;
			if (key->prev)
				key->prev->next = compare;
			else
				*list = compare;
			compare->prev = key->prev;
			key->prev = compare;
			key->next = compare->next;
			compare->next = key;*/
			swap_nodes(&(*list), key, compare);
			if (key->prev->prev)
				key = key->prev->prev;
			else
				key = key->prev;
		}
		else 
		{
			/*move key and compare one node forward each*/
			compare = key;
			key = key->prev;
		}
	}
}
/**
* 
*/

void swap_nodes(listint_t **list, listint_t *key, listint_t *compare)
{
	
		if (compare->next)
			compare->next->prev = key;
		if (key->prev)
			key->prev->next = compare;
		else
			*list = compare;
		compare->prev = key->prev;
		key->prev = compare;
		key->next = compare->next;
		compare->next = key;
}
