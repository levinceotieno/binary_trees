#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a tree.
 *
 * @tree: Binary tree to traverse.
 * Return: Tree depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    return ((tree ? (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0) : depth));
}
