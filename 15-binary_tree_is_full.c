#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binaty tree is full
 * @tree: binary tree to check
 * Return: 1 if tree is full otherwise or tree is NULL 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int result_b, result_l;

	if (!tree)
		return (0);


	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		result_l = result_b = 1;
	else
		result_l = -1;

	result_b = binary_tree_is_full(tree->left);
	result_l = binary_tree_is_full(tree->right);
	return (result_l == result_b);
}
