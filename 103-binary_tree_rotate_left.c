#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: pointer to the tree root
 * Return: pointer to the root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right;

	if (!tree)
		return (NULL);

	right = tree->right;

	tree->right = right->left;
	right->left = tree;
	right->parent = tree->parent;
	tree->parent = right;

	return (right);

}
