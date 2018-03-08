#include "binary_trees.h"
size_t get_tree_size(const binary_tree_t *tree, size_t size);
/**
* binary_tree_size - get the size of a binary tree
* @tree: pointer to a binary tree
* Return: size of tree, if NULL 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1;
	size = get_tree_size(tree, size);
	return (size);
}
/**
* get_tree_size - get size of a tree
* @tree: pointer to tree to check size of
* @size: size of the tree
* Return: Size of the tree
*/
size_t get_tree_size(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return (size);
	size = get_tree_size(tree->left, size);
	if (tree->left != NULL)
		size++;
	size = get_tree_size(tree->right, size);
	if (tree->right != NULL)
		size++;
	return (size);
}
