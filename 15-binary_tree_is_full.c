#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - full or not
 *
 * @tree: Pointer to the tree
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((tree->left == NULL && tree->right == NULL) ||(tree->left != NULL && tree->right != NULL))
{
binary_tree_is_full(tree);
return (1);
}
else
return (0);
}


