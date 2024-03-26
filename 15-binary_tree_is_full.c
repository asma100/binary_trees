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
int node_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((tree->left == NULL && tree->right == NULL) ||(tree->left != NULL && tree->right != NULL))
return (1);
else
return (0);
}


int binary_tree_is_full(const binary_tree_t *tree)
{
int full_1, full_r, full;

if (tree == NULL)
return (0);
node_is_full(tree);
full_1 = binary_tree_full(tree->left);
full_r = binary_tree_full(tree->right);
if(full_1 == 1 && full_r == 1)
full = 1;
return (full);
}


