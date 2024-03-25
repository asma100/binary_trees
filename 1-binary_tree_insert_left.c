#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left: nsert_left
 *
 * @parent: Pointer to the parent node
 * @value: int
 *
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newl;

if (!parent)
return (NULL);
newl = binary_tree_node (parent, value);
if (!newl)
return (NULL);
if(parent->left)
{
newl->left = parent->left;
parent->left->parent = newl;
}
parent->left = newl;
return (newl);
}
