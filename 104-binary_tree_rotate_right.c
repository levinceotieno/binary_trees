#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree to the left
 * @tree: pointer to the tree root
 * Return: pointer to the root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left;

	if (!tree)
		return (NULL);

	left = tree->left;

	tree->left = left->right;
	left->right = tree;
	left->parent = tree->parent;
	tree->parent = left;

	return (left);

}
