#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the binary tree to traverse through
 * @func: pointer to function that prints the value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL) 
        return;
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
