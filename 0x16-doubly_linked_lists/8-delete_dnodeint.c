#include "lists.h"
/**
 * delete_dnodeint_at_index- Delete node at index `index` of
 * a dlistint_t linked list
 * @head: Double pointer to head node of a dlistint_t linked list
 * @index: Index where node is to be deleted
 * Return: 1 if Sucess, otherwise -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp_head = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp_head = *head;
	while (i < index && (*head)->next != NULL)
	{
		i++;
		*head = (*head)->next;
	}
	if (i == index)
	{
		if (index == 0)
		{
			if ((*head)->next == NULL)
			{
				free(*head);
				*head = NULL;
				return (1);
			}
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			return (1);
		}
		if ((*head)->next == NULL)
		{
			(*head)->prev->next = NULL;
			free(*head);
			*head = tmp_head;
			return (1);
		}
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
		free(*head);
		*head = tmp_head;
		return (1);
	}
	return (-1);
}
