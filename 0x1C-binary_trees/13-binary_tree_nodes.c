#include "binary_trees.h"
size_t get_count(const binary_tree_t *tree, size_t count);
/**
* binary_tree_nodes - find number of non-leaf nodes
* @tree: pointer to tree to traverse
* Return: number of non-leaf nodes, Else 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	count = 0;
	count = get_count(tree, count);
		return (count);
}
/**
* get_count - calculate the number of tree nodes not leaf
* @tree: pointer to tree to traverse
* @count: count of non leaf nodes
* Return: number of non leaf nodes, else 0
*/
size_t get_count(const binary_tree_t *tree, size_t count)
{
	size_t r_count;
	size_t l_count;

	r_count = l_count = 0;
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	count = get_count(tree->left, l_count) + count;
	count = get_count(tree->right, r_count) + count;
		return (count + 1);
}

