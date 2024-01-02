#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree preorderly
 * @tree: binary tre t traverse
 * @func: funtion pointer to perform operation on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
