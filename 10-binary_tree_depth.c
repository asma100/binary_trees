#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
if (tree == NULL)
return (0);
if (tree->left)
depth = 1 + binary_tree_depth(tree->parent);
return (depth);
}