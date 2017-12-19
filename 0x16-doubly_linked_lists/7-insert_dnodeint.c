#include "lists.h"
dlistint_t *add_dnodeint_mid(dlistint_t **h, int n);
/**
* insert_dnodeint_at_index - Inserts a new node at a given index
* @h: Double pointer to the head node of a dilistint_t linked list
* @idx: Index number where new node is to be inserted
* @n: Value for data(n) of the new node
* Return: Address of the new node at index idx, otherwise NULL if failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_head = *h;
	dlistint_t *tmp = NULL;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	tmp = *h;
	if (h == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		if (idx == 0)
		{
			return (add_dnodeint(&(*h), n));
		}
		return (NULL);
	}
	while (i < idx && (tmp->next != NULL))
	{
		i++;
		tmp = tmp->next;
	}
	if (i == idx)
	{
		if (tmp->next == NULL)
		{
			return (add_dnodeint_end(&(*h), n));
		}
		*h = tmp;
		new_node = add_dnodeint_mid(&(*h), n);
		*h = tmp_head;
		return (new_node);
	}
	return (NULL);
}
/**
* add_dnodeint_mid - Adds node at the current point in dlistint_t linked list
* @h: Double pointer to the node at index where new node is to be added
* @n: Value at data(n) to be inserted in the new node
* Return: Address of the new node, otherwise NULL
*/
dlistint_t *add_dnodeint_mid(dlistint_t **h, int n)
{
	dlistint_t *new_node;


	if (h == NULL || (*h) == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	((*h)->prev)->next = new_node;
	new_node->prev = (*h)->prev;
	new_node->next = *h;
	new_node->n = n;
	return (new_node);
}