#include "binary_trees.h"
/**
 *binary_tree_rotate_right - performs a right-rotation on a binary
 *tree
 *@tree: root node
 *Return: right-rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
        binary_tree_t *p;
	binary_tree_t *tmp;

        if (tree == NULL || tree->left == NULL)
                return (NULL);

        p = tree->left;
        tmp = p->right;
        p->right = tree;
        tree->left = tmp;
        if (tmp != NULL)
                tmp->parent = tree;
        tmp = tree->parent;
        tree->parent = p;
        p->parent = tmp;
        if (tmp != NULL)
        {
                tmp->left = (tmp->left == tree) ? p : tmp->left;
		tmp->right = (tmp->left != tree) ? p : tmp->right;
        }

        return (p);
}
