#include "lists.h"
/**
* print_dlistint - Prints all the elements of a dlistint_t list
* @h: Pointer to the first element of the list
* Return: The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	num++;
	printf("%d\n", h->n);
	return (num);
}
