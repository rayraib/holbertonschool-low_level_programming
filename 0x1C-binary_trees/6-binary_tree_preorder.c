#include "binary_trees.h"
/**
 * binary_tree_preorder - go through binary tree in preorder traversal
 * @root: pointer to the root node of the binary tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
        return;
    func (tree->n); 
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
