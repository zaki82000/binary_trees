#include "binary_trees.h"
/**
 * binary_tree_insert_left- a function that inserts a
 * node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 * Return: return newnode.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (NewNode == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
return (NULL);
}

NewNode->n = value;
NewNode->left = NULL;
NewNode->right = NULL;
NewNode->parent = parent;

if (parent->left != NULL)
{
NewNode->left = parent->left;
NewNode->left->parent = NewNode;
}

parent->left = NewNode;

return (NewNode);
}
