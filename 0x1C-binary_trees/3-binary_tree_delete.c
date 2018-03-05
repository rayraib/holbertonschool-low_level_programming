#include "binary_trees.h"
/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: pointer to the root node of the binary tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
    // binary_tree_t *parent;
    if (tree == NULL)
        return;
    printf("%d\n", tree->n);
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
