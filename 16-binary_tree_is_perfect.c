#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree:  is a pointer to the root node of the tree to measure the height
 *
 * Return: 1 if tree is perfect or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *root)
{
	if (root == NULL)
		return 1;
	if (root->left == NULL && root->right == NULL)
		return 1;
	if (root->left == NULL || root->right == NULL)
		return 0;
	return isPerfect(root->left) && isPerfect(root->right);
}
