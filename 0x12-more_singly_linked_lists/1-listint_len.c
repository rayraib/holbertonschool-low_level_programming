#include "lists.h"
/**
* listint_len - Calculates the number of elements in a linked listint_t list
* @h: Pointer to a listinit_t type data, the head
* Return: Number of elements/nodes in the linked list
*/
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

