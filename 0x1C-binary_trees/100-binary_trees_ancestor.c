#include "binary_trees.h"
binary_tree_t *find_ancestor(const binary_tree_t *first,
	binary_tree_t *second_parent, binary_tree_t *ancestor);
/*
* binary_trees_ancestor - find the lowest common ancestors 
* @first: pointer to first node 
* @second: pointer to second node 
* Return: pointer to the common ancestor, else NULL 
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	ancestor = second->parent;
	if (first == NULL || second == NULL)
		return (NULL);
	if ((first->parent == NULL && second->parent == NULL) || (first == second))
		return ((binary_tree_t *)first);
	while (second->parent != NULL)
	{
		ancestor = find_ancestor(first, second->parent, ancestor);
		if (ancestor != NULL)
		return (ancestor);
		second = second->parent;
	}
	return (NULL);
}
/*
* find_ancestor - helper to find the common ancestor 
* @first: pointer to first node 
* @second_parent: pointer to second node 
* @ancestor: first ancestor of second node 
* Return: lowest common ancestor if found, else NULL 
*/
binary_tree_t *find_ancestor(const binary_tree_t *first,
	binary_tree_t *second_parent, binary_tree_t *ancestor)
{
	if (first == NULL)
		return (NULL);
	if (first == second_parent)
		return (second_parent);
	ancestor = find_ancestor(first->parent, second_parent, ancestor);
	return (ancestor);
}
