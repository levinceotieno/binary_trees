#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of
 * a node
 * @parent: parent node
 * @value: nodes value
 * Return: inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);
		if (new_node)
		{
			new_node->left = parent->left;
			parent->left = new_node;
			if (new_node->left)
				new_node->left->parent = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
