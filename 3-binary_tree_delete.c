#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a whole binary tree
 * @tree: pointer to the root of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
		binary_tree_delete(tree->right);
		tree->right = NULL;
		free(tree);
		tree = NULL;
	}
}
