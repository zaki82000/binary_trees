#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node- a function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node
 * Return: return new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
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
return (NewNode);
}
