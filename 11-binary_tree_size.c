#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - the size
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
return (0);
size = size + 1;
size = size + binary_tree_size(tree->left);
size = size +binary_tree_size(tree->right);
return (size);
}
