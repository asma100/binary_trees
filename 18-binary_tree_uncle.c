#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - sibling or not
 *
 * @node: Pointer to the node
 *
 * Return: 1 or 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else if (node->parent->right == node)
return (node->parent->left);
else
return (NULL);
}
/**
 * binary_tree_uncle - uncle or not
 *
 * @node: Pointer to the node
 *
 * Return: 1 or 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (binary_tree_sibling(node->parent))
return (binary_tree_sibling(node->parent));
return (NULL);
}
