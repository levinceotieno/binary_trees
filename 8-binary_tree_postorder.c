#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree preorderly
 * @tree: binary tre t traverse
 * @func: funtion pointer to perform operation on each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
