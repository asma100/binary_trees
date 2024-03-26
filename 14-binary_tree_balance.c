#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
    



/**
 * binary_tree_balance - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
int binary_tree_balance(const binary_tree_t *tree)
{


if (tree == NULL)
return (0);
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
if (tree)
{
size_t l_h = 0, r_h = 0;
l_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
r_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((l_h > r_h) ? l_h : r_h);
}
return (0);
}
