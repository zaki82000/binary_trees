#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
fprintf(stderr, "parent is NULL\n");
return (NULL);
}

binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (newNode == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
return (NULL);
}

newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;
newNode->parent = parent;

if (parent->right != NULL)
{
newNode->right = parent->right;
newNode->right->parent = newNode;
}

parent->right = newNode;

return (newNode);
}
