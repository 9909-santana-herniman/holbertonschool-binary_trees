#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: The depth of the node. If tree is NULL, functoin must
 * return 0. The depth is the number of edges between the node
 * and the root.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If the tree (node) is NULL, depth is 0*/
	if (tree == NULL)
		return (0);

	/* If the node is the root (parent is NULL), it's depth is 0 */
	if (tree->parent == NULL)
		return (0);;

	/* Recursively calculate the depth by adding 1 to the depth */
	/* of the parent node */
	return (1 + binary_tree_depth(tree->parent));
}
