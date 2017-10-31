#include "lists.h"
/**
* delete_nodeint_at_index - Deletes node at index of a listint_t linked list
* @head: Double pointer to head node
* @index: Index of the node to be deleted
* Return: 1 if success
*	 -1 if failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *holder;
	listint_t *to_free;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next != NULL)
		{
			to_free = temp;
			holder = temp->next;
			free(to_free);
			*head = holder;
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}

	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next != NULL)
			temp = temp->next;
		else
			return (-1);
	}
	to_free = temp->next;
	holder = to_free->next;
	free(to_free);
	temp->next = holder;
	return (1);
}
