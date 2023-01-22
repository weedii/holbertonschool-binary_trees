#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through
 *                          a binary tree using level-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node to print its value
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[1024];
	binary_tree_t *node;
	int head = 0, tail = 0;

	if (!tree || !func)
		return;

	queue[tail++] = (binary_tree_t *)tree;

	while (head < tail)
	{
		node = queue[head++];

		func(node->n);

		if (node->left)
		{
			queue[tail++] = node->left;
		}

		if (node->right)
		{
			queue[tail++] = node->right;
		}
	}
}
