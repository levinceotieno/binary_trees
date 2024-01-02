#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of  tree
 * @tree: binary tree to traverse
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree)
	{
		if (tree->left)
			height_l = 1 + binary_tree_height(tree->left);
		else
			height_l = 0;
		if (tree->right)
			height_r = 1 + binary_tree_height(tree->right);
		else
			height_r = 0;

		return (height_l > height_r ? height_l : height_r);
	}
	return (0);
}


/**
 * binary_tree_balance - calculates the balance factor of a node
 * @tree: binary tree
 * Return: balance factor a size_t value
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		if (tree->left) /* checks for NULL child */
			left = binary_tree_height(tree->left);
		else
			left = -1;
		if (tree->right)
			right = binary_tree_height(tree->right);
		else
			right = -1;
		return (left - right);
	}
	return (0);
}
