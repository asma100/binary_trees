#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right: insert_right
 *
 * @parent: Pointer to the parent node
 * @value: int
 *
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newr;

if (!parent) 
return (NULL);
newr = binary_tree_node(parent, value);
if(!newr)
return (NULL);
if(parent->right)
{
newr->right = parent->right;
parent->right->parent = newr;
}
parent->right = newr;
return (newr);
}
