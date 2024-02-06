#include "binary_trees.h"

/**
 * binary_tree_is_leaf- a function that checks if a node is a leaf.
 * @node: is a pointer to the node to check.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    while (node)
    {
        if (node->left == NULL && node->right == NULL && node->left->right == NULL && node->right->right == NULL)
            return node->left->right->n = 1;
        else
            return node->left->right->n = 0;
    }
    return node->n;
}