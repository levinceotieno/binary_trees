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
int expected = 1, i, height, size;

return (tree ? ((height = binary_tree_height(tree)), (size = binary_tree_size(tree)),
(i = 0), (for (; i < height + 1; i++, expected *= 2)),
(expected - 1 == size ? 1 : 0)) : 0);
}


