#include "lists.h"
/**
* add_nodeint - Adds a new node at the beginnin gof a listint_t list
* @head: Pointer to another pointer that points to listint_t type data, head
* @n: first element of listint_t struct
* Return: The address of the new element or NULL if fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
