#include "lists.h"
/**
* print_listint - Prints all the elements of a listint_t list
* @h: Pointer to the address of the head,
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
return (i);
}
