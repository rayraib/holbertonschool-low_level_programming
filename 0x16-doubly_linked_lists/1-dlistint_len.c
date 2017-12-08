#include "lists.h"
/**
* dlistint_len - Finds the number of elements in a linked dlistint_T list
* @h: pointer to the linked list
* Return: The number of elements in the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_ele = 0;

	if (h == NULL)
		return (num_ele);
	while (h->next != NULL)
	{
		num_ele++;
		h = h->next;
	}
	num_ele++;
	return (num_ele);
}
