#include "binary_trees.h"
/**
 * binary_tree_insert_right - Create a binary tree node and insert it
 *  as the right child of the @parent
 * @parent: parent node of the binary tree
 * @value: value to be stored in the n element of the new_node
 * Return: newly created node new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
