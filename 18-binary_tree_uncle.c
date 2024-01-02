#include "binary_trees.h"

/**
 * binary_tree_sibling - gets the sibling of a node
 * @node: tree node
 * Return: pointer to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent->right && node->parent->right != node)
	{
		return (node->parent->right);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - gets the uncle of a node
 * @node: tree node
 * Return: pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
