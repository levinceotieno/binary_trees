#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a tree.
 *
 * @tree: Binary tree to traverse.
 * Return: Tree height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0, height_right = 0;

    return ((tree ? (height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0,
                    height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0,
		    height_left > height_right ? height_left : height_right) : 0));
}
