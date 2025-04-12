#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: A pointer to the sibling node. If node is NULL
 * or parent is NULL, return NULL. If node has no sibling,
 * return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or the parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If then node is the left child, return the right child */
	if (node == node->parent->left)
		return (node->parent->right);

	/* And vice versa */
	if (node == node->parent->right)
		return (node->parent->left);

	/* If the node is not a child of its parent, return NULL */
	return (NULL);
}
