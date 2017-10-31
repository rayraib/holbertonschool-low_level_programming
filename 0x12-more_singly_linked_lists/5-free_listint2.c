#include "lists.h"
/**
* free_listint2 - Frees a listint_t list
* @head: Double pointer to initial node of listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *temp;

	h = *head;
	*head = NULL;
	while (*head != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}