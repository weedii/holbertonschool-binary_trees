#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree:  is a pointer to the root node of the tree to measure the height
 *
 * Return: 1 if tree is perfect or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree || (binary_tree_is_perfect(tree->left) &&
				  binary_tree_is_perfect(tree->right)))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	return (1);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t letf_hight = 0, right_hight = 0;

	if (!tree)
		return (0);

	letf_hight = binary_tree_height(tree->left);
	right_hight = binary_tree_height(tree->right);

	if (letf_hight >= right_hight)
		return (letf_hight + 1);
	return (right_hight + 1);
}
