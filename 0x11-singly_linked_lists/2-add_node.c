#include "lists.h"
/**
* add_node - Adds new node at the beginnin gof list_t list
* @head: Pointer to a pointer of type list_t
* @str: Pointer to const char
* Return: Address of the new element, or NULL if failure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str); /* The str element of temp will hold */
	temp->len = strlen(temp->str);
	if (head != NULL)
		temp->next = *head;
	*head = temp;
	return (*head);
}
