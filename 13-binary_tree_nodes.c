#include "binary_trees.h"

/**
 * binary_tree_nodes - checks the number of nodes in tree
 * @tree: binary tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;
if (tree)
{
	if (tree->left || tree->right)
		return 0;
	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
}
return (nodes);
}
