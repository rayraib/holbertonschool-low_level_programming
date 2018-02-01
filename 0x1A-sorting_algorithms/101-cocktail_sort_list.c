#include "sort.h"

int turtle_sort(listint_t **list, listint_t *key, listint_t *compare);
void swap_nodes(listint_t **list, listint_t *key, listint_t *compare);
/**
* cocktail_sort_list - Sort a doubly linked list of integers in ascending order
*			using Cocktail shaker sort
* @list: Double pointer the the head node of the linked list
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *key;
	listint_t *compare;
	int swap_flag = 0;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	swap_flag = 1;

	while (swap_flag == 1)
	{
		key = *list;
		compare = key->next;
		swap_flag = 0;
		while (compare != NULL)
		{
			/* swap nodes*/
			if (key->n > compare->n)
			{
				swap_nodes(&(*list), key, compare);
				compare = key->next;
				swap_flag = 1;
			}
			else
			{
				/*move key and compare one node forward each*/
				key = compare;
				compare = compare->next;
			}
		}
		if (swap_flag == 0)
			return;
		key = key->prev->prev;
		if (key != NULL)
			compare = key->next;
		swap_flag = turtle_sort(&(*list), key, compare);
		if (swap_flag == 0)
			return;
	}
}

/**
* swap_nodes - Swap two nodes from a doubly linked list
* @list: The doubly linked list with nodes to swap
* @key: First node of the linked list to swap
* @compare: Second node to swap
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
		print_list(*list);
}
/**
* turtle_sort - Moves the turtle, smallest int, while traversing from
*		tail to head of a doubly linked list
* @list: doubly linked list to traverse
* @key: Pointer to the node of the list to compare with another element
* @compare: Pointer to a node of the list to compare with key to check if
*		it is the turtle, smaller int
* Return: 1 if nodes were swapped, else 0
*/
int turtle_sort(listint_t **list, listint_t *key, listint_t *compare)
{
	int swap_flag = 0;

	while (key != NULL)
	{
		if (key->n > compare->n)
		{
			swap_nodes(&(*list), key, compare);
			if (key->prev->prev)
				key = key->prev->prev;
			else
				key = key->prev;
			swap_flag = 1;
		}
		else
		{
			/*move key and compare one node forward each*/
			compare = key;
			key = key->prev;
		}
	}
	return (swap_flag);
}
