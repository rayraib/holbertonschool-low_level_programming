#include "lists.h"
/**
* add_nodeint_end - adds new node at the end of a listint_t list
* @head: Double pointer to the first node of the listint_t list
* @n: Value at element n of the listint_t struct
* Return: The address of the new element, NULL if failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *h;
	int i;

	h = *head;
	i = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	h->next = new_node;
	return (new_node);
}
