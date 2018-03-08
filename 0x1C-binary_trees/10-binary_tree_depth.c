#include "binary_trees.h"
/**
* binary_tree_depth - find depth of a node in a binary tree
* @node: pointer to node to find depth of
* Return: depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = 0;
	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
