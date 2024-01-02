#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of  tree
 * @tree: binary tree to traverse
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree)
	{

		if (tree->left)
			size = 1 + binary_tree_size(tree->left);
		else
			size = 1;
		if (tree->right)
			size += binary_tree_size(tree->right);
		else
			size += 0;

		return (size);
	}
	return (0);
}
