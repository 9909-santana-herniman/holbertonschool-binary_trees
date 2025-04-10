#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 * If node is NULL, return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the input node is NULL */
	if (node == NULL)
		return (0);

	/* A node is a leaf if both its left and right children are NULL */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* Otherwise, it's not a leaf */
	return (0);
}
