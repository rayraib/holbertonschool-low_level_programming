#include "lists.h"
/**
* list_len- Calculates the number of elements in a linked list_t list
* @h: Pointer to a list_t type
* Return: The number of elements
*/
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (1)
		{
			n++;
			if (h->next != NULL)
				h = h->next;
			else
				break;
		}
	}
	return (n);
}
