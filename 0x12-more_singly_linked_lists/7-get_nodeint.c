#include "lists.h"
/**
* get_nodeint_at_index - Finds the nth node of a listint_t linked list
* @head: Pointer to the head node, index 0
* @index: The index for the node to be returned
* Return: Pointer to the node at nth index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (temp);
}
