#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in new node.
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Create pointers (temp to hold the old left child) */
	binary_tree_t *new_node, *temp_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialise the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Handle the case where parent already has a left child */
	if (parent->left != NULL)
	{
		temp_node = parent->left;
		new_node->left = temp_node;
		temp_node->parent = new_node;
	}
	/* Set the new node as the left child of the parent */
	parent->left = new_node;

	return (new_node);
}
