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
	dlistint_t *tmp = NULL;
	dlistint_t *tmp_head = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	tmp_head = *head;
	while (i < index && tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (i == index)
	{
		*head = tmp;
		if (index == 0)
		{
			if ((*head)->next == NULL)
			{
				*head = NULL;
				return (1);
			}
			(*head)->next->prev = NULL;
			*head = (*head)->next;
			return (1);
		}
		if ((*head)->next == NULL)
		{
			(*head)->prev->next = NULL;
			*head = tmp_head;
			return (1);
		}
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
		*head = tmp_head;
		return (1);
	}
	return (-1);
}
