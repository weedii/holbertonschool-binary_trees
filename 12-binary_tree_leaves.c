#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaves of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return:  the depth of a binary tree or 0 on failure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t nb_leaves = 0;

    if (tree->left)
    {
        nb_leaves++;
    }
    if (tree->right)
    {
        nb_leaves++;
    }
    if (!tree->left && !tree->right)
    {
        nb_leaves++;
    }
    return(nb_leaves);
}
