#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of the dlistint_t list
* @head:Pointer to a pointer that points to the first node of a dlistint_t list
* @n: Integer for the n element of the new node
* Return: Address of the new element, or NULL if failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
