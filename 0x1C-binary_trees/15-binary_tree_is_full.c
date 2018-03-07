#include "binary_trees.h"
int check_balance(const binary_tree_t *tree, int value);
/**
* binary_tree_is_full - check if a binary tree is full
* @tree: pointer to tree to traverse
* Return: 1 if balanced, otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count;

	count = 0;
	if (tree == NULL)
		return (count);
	count = check_balance(tree, count);
	if (count == 0)
		return (1);
	else
		return (0);
}
/**
* check_balance - checks if a binary tree is balanced
* @tree: pointer to tree to check for balance
* @value: value signifying balance or unbalanced tree
* Return: 0 if balanced, else 1
*/
int check_balance(const binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (0);
	value = check_balance(tree->left, value) + value;
	value = check_balance(tree->right, value) + value;
	if ((tree->right == NULL && tree->left != NULL) ||
		(tree->right != NULL && tree->left == NULL))
		return (value + 1);
	return (value);
}
