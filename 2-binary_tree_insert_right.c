#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of
 * another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure of if
 * parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /* Check for valid parent node */
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialise new node's value and parent (both children to NULL) */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Check for exisiting right child */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Update the parent's right-child pointer to new node */
	parent->right = new_node;

	return (new_node);
}
