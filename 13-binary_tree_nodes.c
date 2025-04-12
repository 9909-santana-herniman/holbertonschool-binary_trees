#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count nodes.
 * Return: Number of nodes with at least one child. Return 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int has_child;

	if (tree == NULL)
		return (0);

	/* Check if current node has at least one child */
	has_child = (tree->left != NULL || tree->right != NULL);

	/* Return 1 if current node counts + recursive */
       /* left/ right subtree counts */
	return ((has_child) +
		binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
