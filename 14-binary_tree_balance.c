#include "binary_trees.h"

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
		left_height = 0;
	}

	if (tree->right != NULL)
	{
		right_height = (int)binary_tree_height(tree->right);
	}
	else
	{
		right_height = 0;
	}

	/* Calculate and return the balance factor */
	return ((left_height - right_height));
}
