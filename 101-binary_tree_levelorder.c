#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of  tree
 * @tree: binary tree to traverse
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree)
	{
		if (tree->left)
			height_left = 1 + binary_tree_height(tree->left);
		else
			height_left = 0;
		if (tree->right)
			height_right = 1 + binary_tree_height(tree->right);
		else
			height_right = 0;

		return (height_left > height_right ? height_left : height_right);
	}
	return (0);
}

/**
 * traverse_level - traverses a spcified level
 * @tree: binary tree
 * @level: level number
 * @func: operation function
 */

void traverse_level(const binary_tree_t *tree, int level, void(*func)(int))
{
	if (!tree)
		return;
	if (level == 0)
		func(tree->n);
	else
	{
		traverse_level(tree->left, level - 1, func);
		traverse_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverses a binary tree level by level.
 * @tree: binary tree
 * @func: function pointer for operation on node value
 */

void binary_tree_levelorder(const binary_tree_t *tree, void(*func)(int))
{
	int i, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		traverse_level(tree, i, func);
}
