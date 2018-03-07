#include "binary_trees.h"
size_t get_leaf_num(const binary_tree_t *tree, size_t leaf_num);
/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to tree to count leaves of
* Return: number of leaves, else 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_num;

	leaf_num = 0;
	if (tree == NULL)
		return (0);
	leaf_num = get_leaf_num(tree, leaf_num);
	return (leaf_num);
}

/**
* get_leaf_num - count the number of leaves in a binary tree
* @tree: pointer to tree to count leaves of
* @leaf_num: number of leaves
* Return: number of leaves, else 0
*/
size_t get_leaf_num(const binary_tree_t *tree, size_t leaf_num)
{
	if (tree == NULL)
		return (leaf_num);
	leaf_num = get_leaf_num(tree->left, leaf_num);
	leaf_num = get_leaf_num(tree->right, leaf_num);
	if (tree->right == NULL && tree->left == NULL)
	leaf_num++;
	return (leaf_num);
}
