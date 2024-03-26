#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * node_is_full - full or not
 *
 * @tree: Pointer to the tree
 *
 * Return: 1 or 0
 */
int node_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);
if ((tree->left == NULL && tree->right == NULL) ||
(tree->left != NULL && tree->right != NULL))
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
l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((l_h > r_h) ? l_h : r_h);
}
return (0);
}
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
 * binary_tree_is_perfect - perfect or not
 *
 * @tree: Pointer to the tree
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if(!tree)
return(0);
if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0 )
return (1);
else
return (0);
}