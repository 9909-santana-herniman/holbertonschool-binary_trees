#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the
 * number of leaves.
 * Return: The number of leaves in the tree.
 * If tree is NULL, return 0. A NULL pointer is not a leaf.
 * A leaf is a node with no left and no right child.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If the tree is NULL, it has no leaves */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf (no left and right children */
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* It's a leaf, so count it as 1 */

	/* If current node is not a lear, */
	/* recursively count the leaves and return sum of the count */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
