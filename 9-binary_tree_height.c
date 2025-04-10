#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: The height of the tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf, its height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* The height of each subtree is 1 (for the current node) plus */
	/* the height of its subtree. If a subtree is NULL, its height */
	/* is considered 0 */

	/* The height of the current node is the maximum height of its subtrees */
	return (left_height > right_height ? left_height : right_height);
}
