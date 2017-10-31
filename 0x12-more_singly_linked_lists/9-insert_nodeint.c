#include "lists.h"
/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: Double pointer to head node
* @idx: Index position where the new node is inserted
* @n: The value at element n for the new node
* Return: Address of the new node, NULL if failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp;

	temp = *head;
	i = 0;
	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (i < idx - 1)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
