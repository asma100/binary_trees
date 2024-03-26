#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - leaf or not
 *
 * @node: Pointer to the node
 *
 * Return: 1 or 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}