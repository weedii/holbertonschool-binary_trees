#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaves of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return:  the depth of a binary tree or 0 on failure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
