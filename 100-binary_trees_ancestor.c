#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a tree
 * @tree: binary tree to traverse
 * Return: tree depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
		{
			depth = 1 +  binary_tree_depth(tree->parent);
		}
		else
			return (0);
	}
	return (depth);
}

/**
 * binary_trees_ancestor - gets the lowest common ancestor of two leaf nodes.
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to ancestor or NULL pointer
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;
	int i, diff;

	if (!first || !first->parent)
		return (NULL);
	if (!second || !second->parent)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	diff = first_depth - second_depth;
	if (diff < 0)
		diff *= -1;

	if (first_depth > second_depth)
		for (i = 0; i < diff; i++)
			first = first->parent;
	else if (first_depth < second_depth)
		for (i = 0; i < diff; i++)
			second = second->parent;

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		if (first->parent == second->parent)
			return (first->parent);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
