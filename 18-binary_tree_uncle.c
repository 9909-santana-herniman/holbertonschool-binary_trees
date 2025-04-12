#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: A pointer to the uncle node.
 * If node is NULL, return NULL.
 * If node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL)
		return (NULL);

	/* If the node has no parent, it can't have an uncle */
	if (node->parent == NULL)
		return (NULL);

	/* If the node has no parent, it can't have an uncle */
	if (node->parent->parent == NULL)
		return (NULL);

	/* Get a pointer to the grand parent node */
	grandparent = node->parent->parent;

	if (grandparent == NULL)
		return (NULL);

	/* If the parent is the left child of the grandparent, the */
	/* uncle is the right child */
	if (grandparent->left != NULL && node->parent == grandparent->left)
		return (grandparent->right);

	/* If the parent is the right child of the grandparent, the */
	/* uncle is the left child */
	if (grandparent->right != NULL && node->parent == grandparent->right)
		return (grandparent->left);

	/* If none of the above conditions are met, there is no uncle */
	return (NULL);
}
