#include "binary_trees.h"

size_t power(size_t number, size_t to_power);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, height, total = 0;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	while (height > 0)
	{
		total += power(2, height);
		height--;
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (size == (total + 1))
		return (1);
	else
		return (0);
}
/**
 * power - Function that calculates a number raised to a power
 * @number: number
 * @to_power: number raised to
 * Return: the calculated value
 */
size_t power(size_t number, size_t to_power)
{
	size_t i, total = 1;

	for (i = 0; i < to_power; i++)
		total *= number;
	return (total);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
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
