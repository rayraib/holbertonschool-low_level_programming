#include "binary_trees.h"
/**
* binary_tree_node - create a binary tree node
* @parent: Parent node of the new binary tree node
* @value: Value to be stored at n element of the new node
* Return: Pointer to the new binary tree node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*create new_node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	/*assign parent, value to the new node, set children to NULL*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
