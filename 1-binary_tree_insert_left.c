#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 *						the left-child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Return:  a pointer to the created node
 *						or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (!parent || !new_node)
        return (NULL);

    new_node->n = value;
    new_node->right = NULL;
    new_node->left = parent->left;

    if (new_node->left)
        new_node->left->parent = new_node;

    parent->left = new_node;
    new_node->parent = parent;

    return (new_node);
}