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
if (node_is_full(tree->left) == 1 && node_is_full(tree->right) == 1 &&
node_is_full(tree) == 1)
return (1);
else
return (0);
}

/**
 * binary_tree_is_full - full or not
 *
 * @tree: Pointer to the tree
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 1 )
return (1);
else
return (0);
}