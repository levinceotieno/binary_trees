#include "binary_trees.h"

/**
 * binary_tree_leaves - checks the number of leaves in tree
 * @tree: binary tree
 * Return: number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
