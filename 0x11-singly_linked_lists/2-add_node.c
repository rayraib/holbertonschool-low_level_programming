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
	list_t **k;

	if (head == NULL)
		return (NULL);
	k = head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (str != NULL)
	{
		temp->str = strdup(str); /* The str element of temp will hold */
		if (temp->str == NULL)
			temp->len = 0;
		else
			temp->len = strlen(temp->str);
	}
	else
	{
		temp->len = 0;
	}
	temp->next = *k;
	*k = temp;
	return (*k);
}
