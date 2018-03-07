#include "binary_trees.h"
/**
 * binary_tree_is_root - check if given node is root
 * @node: node to check if it is root
 * Return: 1 if root, Otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
