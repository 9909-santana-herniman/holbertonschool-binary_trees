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

	/* Using ternary operators to simplify code */
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* The height of the current node is the max height of its subtrees */
	return ((left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, otherwise 0. If tree is
 * NULL, function returns 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If the tree is NULL, it's not perfect */
	if (tree == NULL)
		return (0);

	/* If it's a leaf node, it is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If one child is missing, it is not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check if subtrees are both perfect and have the same height */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		/* Recursively check if subtrees are perfect */
		return ((binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right)));
	}
	else
	{
		return (0); /* If the heights a different, not perfect */
	}
}
