#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* A leaf node has height 0*/
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Height is 1 + max height of left or right subtree */
	return ((1 + (left_height > right_height ?
			left_height : right_height)));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor. If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Using binary_tree_height function */
	if (tree->left != NULL)
	{
		left_height = (int)binary_tree_height(tree->left);
	}
	else
	{
		left_height = -1;
	}
	if (tree->right != NULL)
	{
		right_height = (int)binary_tree_height(tree->right);
	}
	else
	{
		right_height = -1;
	}

	/* Calculate and return the balance factor */
	return ((left_height - right_height));
}
