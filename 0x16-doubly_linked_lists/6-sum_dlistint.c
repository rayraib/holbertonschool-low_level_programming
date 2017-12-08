#include "lists.h"
/**
* sum_dlistint - Calculates sum of all the data(n) of a dlistint_t linked list
* @head: Pointer to the initial node of a dlistint_t linked list
* Return: Sum of all data(n), otherwise 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)/*check if a list exists */
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;/*add value from data(n) of the node */
		head = head->next;/*move head to point to the next node */
	}
	sum += head->n;/*add the value at data(n) of the current node*/
	return (sum);
}
