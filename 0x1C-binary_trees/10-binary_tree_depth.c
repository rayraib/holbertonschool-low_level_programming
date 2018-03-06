#include "binary_trees.h"
/**
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
    size_t depth;
    
    depth = 0;
    while (node->parent != NULL)
    {
        node = node->parent;
        depth++;
    }
    return (depth);
}
