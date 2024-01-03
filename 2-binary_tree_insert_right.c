#include "binary_trees.h"

/**
 * Inserts a node to the right of a given node in a binary tree.
 *
 * @param parent Pointer to the parent node.
 * @param value  Value to be stored in the new node.
 * @return       Pointer to the newly inserted node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent)
	    binary_tree_t *new_node = binary_tree_node(parent, value);
    	    if (new_node)
	    {
		    new_node->right = parent->right;
	    	    parent->right = new_node;
		    if (new_node->right)
			    new_node->right->parent = new_node;
	    }
	    return (new_node);
     return (NULL);

}
