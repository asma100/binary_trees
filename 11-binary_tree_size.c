#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_size (const binary_tree_t *tree)
{
size_t left_size, right_size, max;
if (tree == NULL)
return (0);
if (tree->left)
left_size = 1 + binary_tree_size (tree->left);
else
left_size = 0;
if (tree->right)
right_size = 1 + binary_tree_size (tree->right);
else
right_size = 0;
max = left_size + right_size;
return (max);
}