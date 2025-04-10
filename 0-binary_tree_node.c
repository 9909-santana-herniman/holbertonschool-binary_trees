#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* Pointer to new node */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /* If malloc fails*/
		return (NULL);

	/* Initialise the new node */
	new_node->n = value; /* Set the value of the node */
	new_node->parent = parent; /* Set the parent of the node */
	new_node->left = NULL; /* Initialise left child to NULL */
	new_node->right = NULL; /* Initialise right child to NULL */

	/* Return the pointer to the new node */
	return (new_node);
}
