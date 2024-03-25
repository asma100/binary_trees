#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_height = 0;
size_t right_height = 0;
size_t max_height = 0;
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height > right_height)
max_height = left_height;
else
max_height = right_height + 1;
return (max_height);
}
