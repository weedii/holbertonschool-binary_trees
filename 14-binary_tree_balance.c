#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures balance factor of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t letf_hight = 0, right_hight = 0;

	if (!tree)
		return (0);

	letf_hight = binary_tree_height(tree->left);
	right_hight = binary_tree_height(tree->right);

	return (letf_hight - right_hight);
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
