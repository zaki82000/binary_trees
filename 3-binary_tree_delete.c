#include "binary_trees.h"

/**
 * binary_tree_delete- a function that deletes an entire binary tree.
 * @tree: is a pointer to the root node of the tree to delete.
 * Return: return NULL if root == NULL.
*/

void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

if (tree == NULL)
return;

free(tree);
}