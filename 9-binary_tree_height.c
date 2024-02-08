#include "binary_trees.h"

/**
 * binary_tree_height- a function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree or tree->left and right is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

size_t lheight = binary_tree_height(tree->left);
size_t rheight = binary_tree_height(tree->right);

if (lheight > rheight)
return (lheight + 1);
else
return (rheight + 1);

}
