#include "lists.h"
/**
* free_dlistint - Frees a dlistint_t list
* @head: Pointer to the initial node of a dlistint_t list
*/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)/* Check if a list exists */
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
