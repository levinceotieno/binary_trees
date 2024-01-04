#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of  tree
 * @tree: binary tree to traverse
 * Return: tree height
 */

ize_t binary_tree_height(const binary_tree_t *tree)
{
    return (tree ? 1 + (
        (tree->left ? binary_tree_height(tree->left) : 0) >
        (tree->right ? binary_tree_height(tree->right) : 0) ?
        binary_tree_height(tree->left) : binary_tree_height(tree->right)
    ) : 0);
}

/**
 * binary_tree_size - calculates the size of  tree
 * @tree: binary tree to traverse
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree)
	{

		if (tree->left)
			size = 1 + binary_tree_size(tree->left);
		else
			size = 1;
		if (tree->right)
			size += binary_tree_size(tree->right);
		else
			size += 0;

		return (size);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check if tree is a perfect binary tree
 * @tree: binary tree to check
 * Return: 1 if tree is full otherwise or tree is NULL 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height, size;
    if (!tree)
        return 0;

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);

    return (1 << (height + 1)) - 1 == size;
}
