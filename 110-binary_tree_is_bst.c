#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if tree is a binary search tree
 * @tree: binary tree to check
 * Return: 1 if tree is bst otherwise 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right;
	if(!tree)
		return (0);

	if (tree->left)
	{
		binary_tree_is_bst(tree->left);
		left = tree->left->n;
	}
	else
		left = 1;
	if (tree->right)
	{
		right = binary_tree_is_bst(tree->right);
		right = tree->right->n;
	}
	else
		right = 2;

	return (left < right);
}
