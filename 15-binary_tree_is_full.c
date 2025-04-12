#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, otherwise 0. If tree is
 * NULL, function must return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is NULL, it's not full */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf node (no children), it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the node has both left and right children */
	/* recursively check if both subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
	{
		return ((binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right)));
	}

	/* If the node has only one child, its not full */
	return (0);
}
