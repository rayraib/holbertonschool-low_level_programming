#include "binary_trees.h"
/**
 * binary_tree_inorder - pointer to the root node of the tree to traverse
 * @tree: tree to traverse through
 * @func: pointer to function to print
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
