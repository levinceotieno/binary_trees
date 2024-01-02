#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is a root
 * @node: tree node to check
 * Return: 1 if node is a root, otherwise 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
