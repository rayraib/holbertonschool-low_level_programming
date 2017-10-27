#include "lists.h"
/**
* add_node_end - Adds a new node at the end of the list_t list
* @head: Pointer to a pointer to a list_t
* @str: Pointer to a constant char
* Return: Address of the new element, NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
			new_node->len = 0;
		else
			new_node->len = strlen(new_node->str);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
