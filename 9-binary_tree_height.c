#include "binary_trees.h"

/**
 * calculate_subtree_height - Calculates the height of a subtree.
 * @subtree: Pointer to the subtree to measure.
 * Return: The height of the subtree.
 */

size_t calculate_subtree_height(const binary_tree_t *subtree)
{
	/* Check if subtree exists */
	if (subtree != NULL)
	{
		/* Calculate the height of the subtree */
		/* The height is 1 (for current node */
		/* Plus the height of the subtree below it */
		return (1 + binary_tree_height(subtree));
	}
	else
	{
		return (0);
	}
}

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

	/* Calculate the height of the left & right subtree*/
	left_height = calculate_subtree_height(tree->left);
	right_height = calculate_subtree_height(tree->right);

	/* The height of the current node is the maximum */
	/*  height of its subtrees */
	if (left_height > right_height)
	{
		return (left_height); /* Left is higher */
	}
	else
	{
		return (right_height); /* Right is higher or equal */
	}
}
