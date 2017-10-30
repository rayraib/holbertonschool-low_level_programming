#include "lists.h"
/**
* free_listint - Frees a listint_t list
* @head: Pointer to the first node of the list
*/
void free_listint(listint_t *head)
{
	int i;
	listint_t *temp;

	for (i = 0; head != NULL; i++)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
