#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t linked list
* @head: Double pointer to the initial/head node
* Return: Head node's data
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	listint_t *h;

	h = *head;
	temp = h->next;
	n = h->n;
	free(*head);
	*head = temp;
	return (n);
}
