#include "lists.h"
/**
* get_dnodeint_at_index - Finds the nth node of a dlistint_t linked list
* @head: Pointer to the first node of a dlistint_t linked list
* @index: The number of inex which node is to be found
* Return: The node at the index, otherwise NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && head->next != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}

