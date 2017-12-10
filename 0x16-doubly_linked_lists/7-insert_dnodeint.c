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
	dlistint_t *tmp_head = NULL;
	dlistint_t *tmp = NULL;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	tmp_head = *h;
	if (idx == 0)
	{
		return (add_dnodeint(&(*h), n));
	}
	if (tmp == NULL)
		return (NULL);
	while (i < idx && ((*h)->next != NULL))
	{
		i++;
		(*h) = (*h)->next;
	}
	printf("i = %d\n idx = %d\n", i, idx);
	if (i == idx)
	{
		if ((*h)->next == NULL)
		{
			new_node = (add_dnodeint_end(&(*h), n));
			*h = tmp_head;
			return (new_node);
		}
		new_node = add_dnodeint_mid(&(*h), n);
		*h = tmp_head;
		return (new_node);
	}
	if (i == (idx - 1) && (*h)->next == NULL)
	{
		new_node = add_dnodeint_end(&(*h), n);
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
	new_node->prev = (*h)->prev;
	new_node->next = *h;
	(*h)->prev = new_node;
	(*h)->prev->next = new_node;
	new_node->n = n;
	return (new_node);
}
