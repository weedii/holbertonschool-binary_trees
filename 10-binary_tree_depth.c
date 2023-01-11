#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures depth of a node in a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return:  the depth of a binary tree or 0 on failure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree || !tree->parent)
	{
		return (0);
	}
	d = binary_tree_depth(tree->parent);
	return (d + 1);
}
