#include "lists.h"
/**
* free_listint2 - Frees a listint_t list
* @head: Double pointer to initial node of listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
