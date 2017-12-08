#include "lists.h"
/**
* add_dnodeint_end - Add a new node at the end of a dlistint_t list
* @head: Double pointer to the initial node of a dlistint_t list
* @n: Integer to be inserted as n element of the new node
* Return: Address of the new element, or NULL if failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->next = NULL;
	new_node->prev = tmp;
	tmp->next = new_node;
	new_node->n = n;
	return (new_node);
}
