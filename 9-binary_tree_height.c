#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height: height
 *
 * @binary_tree_t: Pointer to the tree node
 *
 *
 * Return: binary_tree_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
size_t max_height;
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height > right_height)
max_height = left_height;
else
max_height = right_height;
return (max_height);
}