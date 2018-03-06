#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to binary tree to check height of
 * Return: height of the binary tree, 0 if failure or root is Null
 */
size_t calculate_left_height(const binary_tree_t *tree, size_t height);
size_t calculate_right_height(const binary_tree_t *tree, size_t height);
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (tree == NULL)
        return (0); 
    else if (tree->left == NULL && tree->right == NULL)
        return (0);
    left_height = calculate_left_height(tree, 0);
    right_height = calculate_right_height(tree, 0);
    if (left_height > right_height)
        return (left_height);
    return (right_height);
}

/**
 * calculate_left_height - calculate the height of the left branch of the tree 
 * @tree: pointer to the root of the tree to calculate height of
 * @height: initial height of the tree
 */
size_t calculate_left_height(const binary_tree_t *tree, size_t height)
{
    if (tree == NULL) 
        return 0;
    height = calculate_left_height(tree->left, height);
    return (height + 1);
}

/**
 * calculate_right - calculate the height of the right branch of the tree 
 * @tree: pointer to the root of the tree to calculate height of
 * @height: initial height of the tree
 */
size_t calculate_right_height(const binary_tree_t *tree, size_t height)
{
    if (tree == NULL) 
        return 0;
    height = calculate_right_height(tree->left, height);
    return (height + 1);
}
