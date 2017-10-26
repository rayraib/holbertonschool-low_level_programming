#include "lists.h"
/**
* print_list - Pirnts all the elements of a list_t list
* @h: Pointer to a list_t type where the elements to print are stored
* Return: The number of nodes
*/
size_t print_list(const list_t *h)
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
			if (h->str != NULL)
			{
				printf("[%i] ", h->len);
				printf("%s\n", h->str);
			}
			else
			{
				printf("[0] ");
				printf("(nil)\n");
			}
			n++;
			if (h->next != NULL)
				h = h->next;
			else
				break;
		}
	}
	return (n);
}
