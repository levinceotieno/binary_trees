#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binaty tree is full
 * @tree: binary tree to check
 * Return: 1 if tree is full otherwise or tree is NULL 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);


	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		b = a = 1;
	else
		b = -1;

	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	return (b == a);
}
