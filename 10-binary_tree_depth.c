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
